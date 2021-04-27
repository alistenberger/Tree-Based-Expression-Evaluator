#include "Number_Node.h"

Number_Node::Number_Node (int number)
: value_ (number)
{
  //Nothing here
}

Number_Node::~Number_Node (void)
{
  //Nothing allocated
}

int Number_Node::eval (void)
{
  return this->value_;
}

void Number_Node::accept (Expr_Node_Visitor & v) { 
  v.Visit_Number_Node (*this); 
} 

Expr_Node * Number_Node::getLeft (void)
{
  return nullptr;
}

Expr_Node * Number_Node::getRight (void)
{
  return nullptr;
}

void Number_Node::setLeft (Expr_Node * left)
{
  //do nothing
}

void Number_Node::setRight (Expr_Node * right)
{
  //do nothing
}

int Number_Node::get_Precedence (void)
{
  return this->precedence_;
}