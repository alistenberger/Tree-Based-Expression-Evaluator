#include "Expr_Tree_Builder.h"

Expr_Tree_Builder::Expr_Tree_Builder (void)
: tree_ (nullptr)
{
  //Nothing here
}

Expr_Tree_Builder::~Expr_Tree_Builder (void)
{
  delete this->tree_;
}

void Expr_Tree_Builder::start_expression (void)
{
  this->tree_ = new Expr_Tree ();
}

Expr_Node * Expr_Tree_Builder::build_number (int n)
{
  return new Number_Node (n);
}

Expr_Node * Expr_Tree_Builder::build_add_operator (void)
{
  return new Add_Expr_Node ();
}

Expr_Node * Expr_Tree_Builder::build_subtract_operator (void)
{
  return new Subtract_Expr_Node ();
}

Expr_Node * Expr_Tree_Builder::build_multiply_operator (void)
{
  return new Multiply_Expr_Node ();
}

Expr_Node * Expr_Tree_Builder::build_divide_operator (void)
{
  return new Divide_Expr_Node ();
}

Expr_Node * Expr_Tree_Builder::build_modulus_operator (void)
{
  return new Modulus_Expr_Node ();
}

Expr_Node * Expr_Tree_Builder::build_open_parenthesis (void)
{
  //Not having parenthesis objects, delete. Was just on slides
}

Expr_Node * Expr_Tree_Builder::build_close_parenthesis (void)
{
  //Not having parenthesis objects, delete. Was just on slides
} 

void Expr_Tree_Builder::build_Tree (Queue <Expr_Node *> & postfix, Stack <Expr_Node *> & stack)
{
  while (!postfix.is_empty ()) {
    Expr_Node * tempNode = postfix.dequeue ();
    if (tempNode->get_Precedence () == 0) {
      stack.push (tempNode);
    } else {
      Expr_Node * tempRight = stack.top ();
      stack.pop ();
      Expr_Node * tempLeft = stack.top ();
      stack.pop ();
      tempNode->setLeft (tempLeft);
      tempNode->setRight (tempRight);
      stack.push (tempNode);
    }
  }
  this->tree_->set_Head_Node (stack.top ());
  stack.pop ();
}

Expr_Tree * Expr_Tree_Builder::get_expression (void)
{
  return this->tree_;
}