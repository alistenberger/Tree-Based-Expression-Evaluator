#include "Calculator.h"

Calculator::Calculator (void)
{
  // Nothing here
}

Calculator::~Calculator (void)
{
  // Nothing Allocated
}


bool Calculator::infix_to_postfix (const std::string & infix, Expr_Tree_Builder & builder, Queue <Expr_Node *> & postfix)
{
  std::istringstream input(infix); // create a input stream parser 
  std::string token; // current token in string/stream 
  Expr_Node * node = nullptr; // created Node object 
  Expr_Node * tempNode = nullptr;
  Stack <Expr_Node *> tempStack = Stack <Expr_Node *> ();
  Array <int> parenthesisTracker = Array <int> (0);
  int parenthesisIterator = 0;
  while (!input.eof ()) { 
    input >> token; 
    //Function evaluates a token and returns the corresponding Expression Command utilizing the parameter factory
    //If a token is an opening parenthesis, an array tracking parenthesis and operators contained within the parenthesis is incremented
    if (token == "(") {
      if (parenthesisTracker.size () == 0) {
        parenthesisTracker.append (0);
      } else {
        parenthesisTracker.append (0);
        parenthesisIterator++;
      }
      //Get the next token in the expression so evaluation can continue and the program isn't accessing a command object that isn't there
      input >> token;
    //Evaluate closing parenthesis and handle the parenthesis array and iterator
    } else if (token == ")") {
    //The while loop addresses the case in which a subsequent operator is a parenthesis
      while (token == ")") {
        int stackPop = parenthesisTracker.get (parenthesisIterator);
        for (stackPop; stackPop > 0; stackPop --) {
          tempNode = tempStack.top ();
          postfix.enqueue (tempNode);
          tempStack.pop ();
        }
        parenthesisTracker.resize (parenthesisTracker.size () -1);
        if (parenthesisIterator != 0) {
          parenthesisIterator -= 1;
        }
        input >> token;
      }
    } 
    if (token[0] == '-' && std::isdigit(token[1]) || std::isdigit(token[0])) {
      int tempInt = std::stoi (token);
      node = builder.build_number (tempInt);
    } else if (token == "+") {
      node = builder.build_add_operator ();
    } else if (token == "-") { 
      node = builder.build_subtract_operator ();
    } else if (token == "*") {
      node = builder.build_multiply_operator ();
    } else if (token == "/") {
      node = builder.build_divide_operator ();
    } else if (token == "%") {
      node = builder.build_modulus_operator ();
    }  
    //Evaluate first for number commands as these are placed directly into postfix, without any additional logic
    if (node->get_Precedence () == 0) {
      postfix.enqueue (node);
    //+ - * / and % can be included here as they all follow the same rules for precedence evaluation
    } else if (node->get_Precedence () == 2 || node->get_Precedence () == 1) {
      //If the stack is empty, any command can go on it
      if (tempStack.is_empty () || node->get_Precedence () > tempStack.top ()->get_Precedence ()) {
        tempStack.push (node);
        if (parenthesisTracker.size () != 0) {
          parenthesisTracker.set (parenthesisIterator, parenthesisTracker.get (parenthesisIterator) + 1);
        }
      } else {
      //Until the stack is empty or a command with greater precedence is encountered, pop commands off the stack and append to postfix
        while (!tempStack.is_empty () && node->get_Precedence () <= tempStack.top ()->get_Precedence ()) {
          tempNode = tempStack.top ();
          postfix.enqueue (tempNode);
          tempStack.pop ();
        }
        //Push the command to the stack after the while loop executes
        tempStack.push (node);
        if (parenthesisTracker.size () != 0) {
          parenthesisTracker.set (parenthesisIterator, parenthesisTracker.get (parenthesisIterator) + 1);
        }
      }
    }
  }
  input.clear ();
  token = "";
  node = nullptr;
//Finally, if the expression is done reading, if there are any commands left on the stack, move them to postfix
  while (!tempStack.is_empty ()) {
    tempNode = tempStack.top ();
    postfix.enqueue (tempNode);
    tempStack.pop ();
  }
  tempNode = nullptr;
  tempStack.clear ();
  return true;
}

int Calculator::evaluate_tree (Expr_Tree_Builder & builder)
{
  Expr_Node * expr_tree = builder.get_expression ()->get_Head_Node ();
  Eval_Expr_Tree eval; 
// evaluate the expression tree 
  expr_tree->accept (eval); 
  int result = eval.result ();
  return result;
}

int Calculator::run (void) {
  bool keepGoing = true;
  while (keepGoing) {
    std::cout << "Please enter an expression to be evaluated or type 'QUIT' to exit: " << std::endl;
    std::string infix;
    std::getline(std::cin, infix);
    if (infix == "QUIT") {
      break;
    }
    std::cout << std::endl << "Processing..." << std::endl << std::endl;
    Stack <Expr_Node *> buildStack;
    Expr_Tree_Builder builder;
    Queue <Expr_Node *> postfix;
    this->infix_to_postfix (infix, builder, postfix);
    builder.build_Tree (postfix, buildStack);
    int answer = this->evaluate_tree (builder);
    std::cout << std::endl << "Answer to equation: " << infix << " is: " << answer << std::endl << std::endl;
  }
  return 0;
}