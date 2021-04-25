#include "Number_Node.h"

Number_Node::Number_Node (int number)
: parent_Node_ (nullptr),
value_ (number)
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