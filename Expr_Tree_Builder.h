#ifndef _EXPR_TREE_BUILDER_H_
#define _EXPR_TREE_BUILDER_H_

#include "Expr_Builder.h"
#include "Expr_Tree.h"
#include "Queue.h"
#include "Stack.h"

class Expr_Tree_Builder : public Expr_Builder { 
public:
  Expr_Tree_Builder (void); 
  virtual ~Expr_Tree_Builder (void); 
  virtual void start_expression (void);
  virtual Expr_Node * build_number (int n); 
  virtual Expr_Node * build_add_operator (void); 
  virtual Expr_Node * build_subtract_operator (void); 
  virtual Expr_Node * build_multiply_operator (void);
  virtual Expr_Node * build_divide_operator (void );
  virtual Expr_Node * build_modulus_operator (void);
  virtual Expr_Node * build_open_parenthesis (void); 
  virtual Expr_Node * build_close_parenthesis (void); 
  void build_Tree (Queue <Expr_Node *> & postfix, Stack <Expr_Node *> & stack);
  Expr_Tree * get_expression (void);
private: 
 // current state of expression tree 
  Expr_Tree * tree_;
 // other variables to coordinate build process 
}; 

#endif //!defined _EXPR_TREE_BUILDER_H_