#ifndef _EVAL_EXPR_TREE_H_
#define _EVAL_EXPR_TREE_H_

#include "Expr_Node_Visitor.h"

class Eval_Expr_Tree : public Expr_Node_Visitor { 
public: 
  Eval_Expr_Tree (void); 
  virtual ~Eval_Expr_Tree (void); 
  // Methods for visiting concrete nodes 
  virtual void Visit_Add_Node (Add_Expr_Node & node); 
  virtual void Visit_Subtract_Node (Subtract_Expr_Node & node);
  virtual void Visit_Multiply_Node (Multiply_Expr_Node & node);
  virtual void Visit_Divide_Node (Divide_Expr_Node & node);
  virtual void Visit_Modulus_Node (Modulus_Expr_Node & node);
  virtual void Visit_Number_Node (Number_Node & node); 
  int result (void) const;
private: 
  int result_; 
 // other state for calculating result 
}; 

#endif //!defined _EVAL_EXPR_TREE_H_