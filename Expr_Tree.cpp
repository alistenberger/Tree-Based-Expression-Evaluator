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

void Expr_Tree::insert_Node (Expr_Node * node)
{
  if (this->headNode_ == nullptr) {
    this->headNode_ = node;
  }
  else if (node->get_Precedence () > this->headNode_->get_Precedence ()) {
    Expr_Node * tempNode = this->headNode_;
    this->headNode_ = node;
    node->setLeft (tempNode);
  } else if (node->get_Precedence () <= this->headNode_->get_Precedence ()) {
    Expr_Node * curNode = this->headNode_;
    if (curNode->getLeft () == nullptr) {
      curNode->setLeft (node);
    } else if (curNode->getRight () == nullptr) {
      curNode->setRight (node);
    } else
  }
}