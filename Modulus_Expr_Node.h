#ifndef _MODULUS_EXPR_NODE_H_
#define _MODULUS_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Modulus_Expr_Node : public Binary_Expr_Node { 
public: 

  Modulus_Expr_Node (void); 

  virtual ~Modulus_Expr_Node (void); 

  virtual int eval (void); 

  virtual void accept (Expr_Node_Visitor & v);
};

#endif // !defined _MODULUS_EXPR_NODE_H_