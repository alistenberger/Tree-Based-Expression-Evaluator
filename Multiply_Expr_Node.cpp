#include "Multiply_Expr_Node.h"

Multiply_Expr_Node::Multiply_Expr_Node (void)
{
  //Nothing here
}

Multiply_Expr_Node::~Multiply_Expr_Node (void)
{
  //Nothing here
}

int Multiply_Expr_Node::eval (int num1, int num2)
{
  return num1 * num2;
}