#include "Modulus_Expr_Node.h"


Modulus_Expr_Node::Modulus_Expr_Node (void)
{
  //Nothing here
}

Modulus_Expr_Node::~Modulus_Expr_Node (void)
{
  //Nothing here
}

int Modulus_Expr_Node::eval (void)
{
  int num1 = this->getLeft ()->eval ();
  int num2 = this->getRight ()->eval();
  return num1 % num2;
}

void Modulus_Expr_Node::accept (Expr_Node_Visitor & v) { 
  v.Visit_Modulus_Node (*this); 
}

int Modulus_Expr_Node::get_Precedence (void)
{
  return this->precedence_;
}