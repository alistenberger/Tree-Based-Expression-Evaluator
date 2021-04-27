#include "Expr_Tree.h"

Expr_Tree::Expr_Tree (void)
: headNode_ (nullptr)
{
  //Nothing here
}

Expr_Tree::~Expr_Tree (void)
{
  //nothing here
}

void Expr_Tree::set_Head_Node (Expr_Node * node)
{
  this->headNode_ = node;
}

Expr_Node * Expr_Tree::get_Head_Node (void)
{
  return this->headNode_;
}