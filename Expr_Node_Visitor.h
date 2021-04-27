#ifndef _EXPR_NODE_VISITOR_H_
#define _EXPR_NODE_VISITOR_H_

#include "Expr_Node.h"
#include "Binary_Expr_Node.h"
#include "Add_Expr_Node.h"
#include "Subtract_Expr_Node.h"
#include "Multiply_Expr_Node.h"
#include "Divide_Expr_Node.h"
#include "Modulus_Expr_Node.h"
#include "Number_Node.h"

class Expr_Node_Visitor { 
public:
  Expr_Node_Visitor (void);
  virtual ~Expr_Node_Visitor (void); 
  // Methods for visiting concrete nodes 
  virtual void Visit_Add_Node (const Add_Expr_Node & node) = 0; 
  virtual void Visit_Subtract_Node (const Subtract_Expr_Node & node) = 0;
  virtual void Visit_Multiply_Node (const Multiply_Expr_Node & node) = 0;
  virtual void Visit_Divide_Node (const Divide_Expr_Node & node) = 0;
  virtual void Visit_Modulus_Node (const Modulus_Expr_Node & node) = 0;
  virtual void Visit_Number_Node (const Number_Node & node) = 0; 
};

#endif // !defined _EXPR_NODE_VISITOR_H_