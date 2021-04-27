#include "Expr_Tree_Builder.h"

Expr_Tree_Builder::Expr_Tree_Builder (void)
: tree_ (nullptr)
{
  //Nothing here
}

Expr_Tree_Builder::~Expr_Tree_Builder (void)
{
  delete this->tree_;
}

void Expr_Tree_Builder::start_expression (void)
{
  this->tree_ = new Expr_Tree ();
}

void Expr_Tree_Builder::build_number (int n)
{
  Expr_Node * numNode = new Number_Node (n);
  this->insert_Node (numNode);
}

void Expr_Tree_Builder::build_add_operator (void)
{
  Expr_Node * addNode = new Add_Expr_Node ();
  this->insert_Node (addNode);
}

void Expr_Tree_Builder::build_subtract_operator (void)
{
  Expr_Node * subNode = new Subtract_Expr_Node ();
  this->insert_Node (subNode);
}

void Expr_Tree_Builder::build_multiply_operator (void)
{
  Expr_Node * multNode = new Multiply_Expr_Node ();
  this->insert_Node (multNode);
}

void Expr_Tree_Builder::build_divide_operator (void)
{
  Expr_Node * divNode = new Divide_Expr_Node ();
  this->insert_Node (divNode);
}

void Expr_Tree_Builder::build_modulus_operator (void)
{
  Expr_Node * modNode = new Modulus_Expr_Node ();
  this->insert_Node (modNode);
}

void Expr_Tree_Builder::build_open_parenthesis (void)
{
  //Not having parenthesis objects, delete. Was just on slides
}

void Expr_Tree_Builder::build_close_parenthesis (void)
{
  //Not having parenthesis objects, delete. Was just on slides
} 

void Expr_Tree_Builder::insert_Node (Expr_Node * node)
{
  this->tree_->insert_Node (node);
}

Expr_Tree * Expr_Tree_Builder::get_expression (void)
{
  return this->tree_;
}