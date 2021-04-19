#ifndef _BINARY_EXPR_NODE_H_
#define _BINARY_EXPR_NODE_H_

#include "Expr_Node.h"


class Binary_Expr_Node : public Expr_Node { 
public: 
  
  Binary_Expr_Node (void);

  virtual ~Binary_Expr_Node (void); 
  // ... 
  virtual int eval (void);
  // use template method to provide common 
  // behavior for all binary nodes 

  virtual void print_preorder (std::ostream &); 

  virtual void print_inorder (std::ostream &);
   
protected: 
 Expr_Node * right_; 
 Expr_Node * left_; 
};

#endif // !defined _BINARY_EXPR_NODE_H_