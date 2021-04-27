#ifndef _ADD_EXPR_NODE_H_
#define _ADD_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Add_Expr_Node : public Binary_Expr_Node { 
public: 

  Add_Expr_Node (void); 

  virtual ~Add_Expr_Node (void); 

  virtual int eval (void); 

  virtual void accept (Expr_Node_Visitor & v);
};

#endif // !defined _ADD_EXPR_NODE_H_