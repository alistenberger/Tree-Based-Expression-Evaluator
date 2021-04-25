#include "Divide_Expr_Node.h"

Divide_Expr_Node::Divide_Expr_Node (void)
{
  //Nothing here
}

Divide_Expr_Node::~Divide_Expr_Node (void)
{
  //Nothing here
}

int Divide_Expr_Node::eval (int num1, int num2)
{
  return num1 / num2;
}

void Divide_Expr_Node::accept (Expr_Node_Visitor & v) { 
  v.Visit_Divide_Node (*this); 
} 