#ifndef _EXPR_BUILDER_H_
#define _EXPR_BUILDER_H_

#include "Expr_Tree.h"

class Expr_Builder { 
public: 
  Expr_Builder (void);
  ~Expr_Builder (void);
  virtual void start_expression (void) = 0; 
  virtual Number_Node * build_number (int n) = 0; 
  virtual Add_Expr_Node * build_add_operator (void) = 0; 
  virtual Subtract_Expr_Node * build_subtract_operator (void) = 0; 
  virtual Multiply_Expr_Node * build_multiply_operator (void) = 0;
  virtual Divide_Expr_Node * build_divide_operator (void )= 0;
  virtual Modulus_Expr_Node * build_modulus_operator (void) = 0;
  virtual Expr_Tree * get_expression (void) = 0; 
}; 

#endif //!defined _EXPR_BUILDER_H_