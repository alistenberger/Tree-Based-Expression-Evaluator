#ifndef _MODULUS_EXPR_NODE_H_
#define _MODULUS_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Modulus_Expr_Node : public Binary_Expr_Node { 
public: 

  Modulus_Expr_Node (void); 

  virtual ~Modulus_Expr_Node (void); 

  virtual int eval (int num1, int num2); 

  virtual void print_preorder (std::ostream &) = 0; 

  virtual void print_inorder (std::ostream &) = 0; 
};

#endif // !defined _MODULUS_EXPR_NODE_H_