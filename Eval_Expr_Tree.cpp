#include "Eval_Expr_Tree.h"


Eval_Expr_Tree::Eval_Expr_Tree (void)
: result_ (0)
{
  //Nothing here
}

Eval_Expr_Tree::~Eval_Expr_Tree (void)
{
  //Nothing here
} 
 
void Eval_Expr_Tree::Visit_Add_Node (Add_Expr_Node & node)
{
  node.getLeft ()->accept (*this);
  int num1 = node.getLeft ()->eval ();
  node.getRight ()->accept (*this);
  int num2 = node.getRight ()->eval ();
  this->result_ = num1 + num2;
} 

void Eval_Expr_Tree::Visit_Subtract_Node (Subtract_Expr_Node & node)
{
  node.getLeft ()->accept (*this);
  int num1 = node.getLeft ()->eval ();
  node.getRight ()->accept (*this);
  int num2 = node.getRight ()->eval ();
  this->result_ = num1 - num2;
} 

void Eval_Expr_Tree::Visit_Multiply_Node (Multiply_Expr_Node & node)
{
  node.getLeft ()->accept (*this);
  int num1 = node.getLeft ()->eval ();
  node.getRight ()->accept (*this);
  int num2 = node.getRight ()->eval ();
  this->result_ = num1 * num2;
} 

void Eval_Expr_Tree::Visit_Divide_Node (Divide_Expr_Node & node)
{
  node.getLeft ()->accept (*this);
  int num1 = node.getLeft ()->eval ();
  node.getRight ()->accept (*this);
  int num2 = node.getRight ()->eval ();
  this->result_ = num1 / num2;
} 

void Eval_Expr_Tree::Visit_Modulus_Node (Modulus_Expr_Node & node)
{
  node.getLeft ()->accept (*this);
  int num1 = node.getLeft ()->eval ();
  node.getRight ()->accept (*this);
  int num2 = node.getRight ()->eval ();
  this->result_ = num1 % num2;
} 

void Eval_Expr_Tree::Visit_Number_Node (Number_Node & node)
{
  this->result_ = node.eval ();
} 

int Eval_Expr_Tree::result (void) const
{
  return this->result_;
}