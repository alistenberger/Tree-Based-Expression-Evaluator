#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_

#include <iostream>
#include "Expr_Node_Visitor.h"

class Expr_Node { 
public: 
  Expr_Node (void); 
  
  virtual ~Expr_Node (void); 
  
  // Used to traverse the tree 
  virtual int eval (void) = 0; 

  virtual void accept (Expr_Node_Visitor & v) = 0;
}; 

#endif // !defined _EXPR_NODE_H_