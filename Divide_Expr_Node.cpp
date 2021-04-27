#include "Divide_Expr_Node.h"

Divide_Expr_Node::Divide_Expr_Node (void)
{
  //Nothing here
}

Divide_Expr_Node::~Divide_Expr_Node (void)
{
  //Nothing here
}

int Divide_Expr_Node::eval (void)
{
  int num1 = this->getLeft ()->eval ();
  int num2 = this->getRight ()->eval();
  return num1 / num2;
}

void Divide_Expr_Node::accept (Expr_Node_Visitor & v)
{ 
  v.Visit_Divide_Node (*this); 
} 

int Divide_Expr_Node::get_Precedence (void)
{
  return this->precedence_;
}