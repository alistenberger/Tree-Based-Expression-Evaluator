#include "Expr_Tree_Builder.h"
#include <iostream>

Expr_Tree_Builder::Expr_Tree_Builder (void)
: tree_ (nullptr)
{
  //Nothing here
}

Expr_Tree_Builder::~Expr_Tree_Builder (void)
{
  //Nothing here
}

void Expr_Tree_Builder::start_expression (void)
{
  this->tree_ = new Expr_Tree ();
}

Number_Node * Expr_Tree_Builder::build_number (int n)
{
  Number_Node * returnNode = new Number_Node (n);
  return returnNode;
}

Add_Expr_Node * Expr_Tree_Builder::build_add_operator (void)
{
  Add_Expr_Node * returnNode = new Add_Expr_Node ();
  return returnNode;
}

Subtract_Expr_Node * Expr_Tree_Builder::build_subtract_operator (void)
{
  Subtract_Expr_Node * returnNode = new Subtract_Expr_Node ();
  return returnNode;
}

Multiply_Expr_Node * Expr_Tree_Builder::build_multiply_operator (void)
{
  Multiply_Expr_Node * returnNode = new Multiply_Expr_Node ();
  return returnNode;
}

Divide_Expr_Node * Expr_Tree_Builder::build_divide_operator (void)
{
  Divide_Expr_Node * returnNode = new Divide_Expr_Node ();
  return returnNode;
}

Modulus_Expr_Node * Expr_Tree_Builder::build_modulus_operator (void)
{
  Modulus_Expr_Node * returnNode = new Modulus_Expr_Node ();
  return returnNode;
}

//Takes the inputs from the calculator and builds the tree internal to the class
void Expr_Tree_Builder::build_Tree (Queue <Expr_Node *> & postfix, Stack <Expr_Node *> & stack)
{
  this->start_expression ();
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
  Expr_Node * tempNode = stack.top ();
  this->tree_->set_Head_Node (tempNode);
  stack.pop ();
}

Expr_Tree * Expr_Tree_Builder::get_expression (void)
{
  return this->tree_;
}