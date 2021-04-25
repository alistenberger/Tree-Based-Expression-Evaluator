#ifndef _DIVIDE_EXPR_NODE_H_
#define _DIVIDE_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Divide_Expr_Node : public Binary_Expr_Node { 
public: 

  Divide_Expr_Node (void); 

  virtual ~Divide_Expr_Node (void); 

  virtual int eval (int num1, int num2); 

  virtual void accept (Expr_Node_Visitor & v);
};

#endif // !defined _DIVIDE_EXPR_NODE_H_