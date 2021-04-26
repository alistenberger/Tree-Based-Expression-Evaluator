#ifndef _EXPR_BUILDER_H_
#define _EXPR_BUILDER_H_

#include "Expr_Tree.h"

class Expr_Builder { 
public: 
  virtual void start_expression (void) = 0; 
  virtual void build_number (int n) = 0; 
  virtual void build_add_operator (void) = 0; 
  virtual void build_subtract_operator (void) = 0; 
  virtual void build_multiply_operator (void) = 0;
  virtual void build_divide_operator (void )= 0;
  virtual void build_modulus_operator (void) = 0;
  virtual void build_open_parenthesis (void) = 0; 
  virtual void build_close_parenthesis (void) = 0; 
  virtual Expr_Tree * get_expression (void) = 0; 
}; 

#endif //!defined _EXPR_BUILDER_H_