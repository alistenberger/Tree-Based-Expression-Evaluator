#ifndef _EXPR_TREE_BUILDER_H_
#define _EXPR_TREE_BUILDER_H_

#include "Expr_Builder.h"
#include "Expr_Tree.h"

class Expr_Tree_Builder : public Expr_Builder { 
  Expr_Tree_Builder (void); 
  virtual ~Expr_Tree_Builder (void); 
  virtual void start_expression (void);
  virtual void build_number (int n); 
  virtual void build_add_operator (void); 
  virtual void build_subtract_operator (void); 
  virtual void build_multiply_operator (void);
  virtual void build_divide_operator (void );
  virtual void build_modulus_operator (void);
  virtual void build_open_parenthesis (void); 
  virtual void build_close_parenthesis (void); 
  Expr_Tree * get_expression (void);
private: 
 // current state of expression tree 
  Expr_Tree * tree_;
 // other variables to coordinate build process 
}; 

#endif //!defined _EXPR_TREE_BUILDER_H_