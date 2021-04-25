#include "Subtract_Expr_Node.h"

Subtract_Expr_Node::Subtract_Expr_Node (void)
{
  //Nothing here
}

Subtract_Expr_Node::~Subtract_Expr_Node (void)
{
  //Nothing here
}

int Subtract_Expr_Node::eval (int num1, int num2)
{
  return num1 - num2;
}

void Subtract_Expr_Node::accept (Expr_Node_Visitor & v) { 
  v.Visit_Subtract_Node (*this); 
} 