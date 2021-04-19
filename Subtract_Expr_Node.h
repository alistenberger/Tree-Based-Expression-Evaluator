#ifndef _SUBTRACT_EXPR_NODE_H_
#define _SUBTRACT_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Subtract_Expr_Node : public Binary_Expr_Node { 
public: 

  Subtract_Expr_Node (void); 

  virtual ~Subtract_Expr_Node (void); 

  virtual int eval (int num1, int num2); 

  virtual void print_preorder (std::ostream &) = 0; 

  virtual void print_inorder (std::ostream &) = 0; 
};

#endif // !defined _SUBTRACT_EXPR_NODE_H_