#include "Add_Expr_Node.h"

Add_Expr_Node::Add_Expr_Node (void)
{
  //Nothing here
}

Add_Expr_Node::~Add_Expr_Node (void)
{
  //Nothing here
}

int Add_Expr_Node::eval (void)
{
  int num1 = this->getLeft ()->eval ();
  int num2 = this->getRight ()->eval();
  return num1 + num2;
}

void Add_Expr_Node::accept (Expr_Node_Visitor & v) { 
  v.Visit_Add_Node (*this); 
} 

int Add_Expr_Node::get_Precedence (void) {
  return this->precedence_;
}