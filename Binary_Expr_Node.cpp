#include "Binary_Expr_Node.h"

Binary_Expr_Node::Binary_Expr_Node (void)
: right_ (nullptr),
left_ (nullptr)
{
  //Nothing here
}

Binary_Expr_Node::~Binary_Expr_Node (void)
{
  //Nothing allocated
} 

Expr_Node * Binary_Expr_Node::getLeft (void)
{
  return this->left_;
}

Expr_Node * Binary_Expr_Node::getRight (void)
{
  return this->right_;
}

void Binary_Expr_Node::setLeft (Expr_Node * left)
{
  this->left_ = left;
}

void Binary_Expr_Node::setRight (Expr_Node * right)
{
  this->right_ = right;
}