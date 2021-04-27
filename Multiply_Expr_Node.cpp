#include "Multiply_Expr_Node.h"

Multiply_Expr_Node::Multiply_Expr_Node (void)
{
  //Nothing here
}

Multiply_Expr_Node::~Multiply_Expr_Node (void)
{
  //Nothing here
}

int Multiply_Expr_Node::eval (void)
{
  int num1 = this->getLeft ()->eval ();
  int num2 = this->getRight ()->eval();
  return num1 * num2;
}

void Multiply_Expr_Node::accept (Expr_Node_Visitor & v) { 
  v.Visit_Multiply_Node (*this); 
} 