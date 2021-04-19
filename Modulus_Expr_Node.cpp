#include "Modulus_Expr_Node.h"

Modulus_Expr_Node::Modulus_Expr_Node (void)
{
  //Nothing here
}

Modulus_Expr_Node::~Modulus_Expr_Node (void)
{
  //Nothing here
}

int Modulus_Expr_Node::eval (int num1, int num2)
{
  return num1 % num2;
}