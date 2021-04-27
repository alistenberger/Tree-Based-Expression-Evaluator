#ifndef _MULTIPLY_EXPR_NODE_H_
#define _MULTIPLY_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Multiply_Expr_Node : public Binary_Expr_Node { 
public: 

  Multiply_Expr_Node (void); 

  virtual ~Multiply_Expr_Node (void); 

  virtual int eval (void); 

  virtual void accept (Expr_Node_Visitor & v);
};

#endif // !defined _MULTIPLY_EXPR_NODE_H_