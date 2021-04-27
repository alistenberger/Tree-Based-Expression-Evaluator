#ifndef _SUBTRACT_EXPR_NODE_H_
#define _SUBTRACT_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Subtract_Expr_Node : public Binary_Expr_Node 
{ 
public: 

  Subtract_Expr_Node (void); 

  virtual ~Subtract_Expr_Node (void); 

  virtual int eval (void); 

  virtual void accept (Expr_Node_Visitor & v);

  virtual int get_Precedence (void);

protected:

  int precedence_ = 1;
};

#endif // !defined _SUBTRACT_EXPR_NODE_H_