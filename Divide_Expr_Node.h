#ifndef _DIVIDE_EXPR_NODE_H_
#define _DIVIDE_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Divide_Expr_Node : public Binary_Expr_Node { 
public: 

  Divide_Expr_Node (void); 

  virtual ~Divide_Expr_Node (void); 

  virtual int eval (void); 

  virtual void accept (Expr_Node_Visitor & v);

  virtual int get_Precedence (void);

protected:

  int precedence_ = 2;
};

#endif // !defined _DIVIDE_EXPR_NODE_H_