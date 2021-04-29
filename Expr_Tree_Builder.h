#ifndef _EXPR_TREE_BUILDER_H_
#define _EXPR_TREE_BUILDER_H_

#include "Expr_Builder.h"
#include "Expr_Tree.h"
#include "Queue.h"
#include "Stack.h"
#include "Expr_Node.h"
#include "Binary_Expr_Node.h"
#include "Add_Expr_Node.h"
#include "Subtract_Expr_Node.h"
#include "Multiply_Expr_Node.h"
#include "Divide_Expr_Node.h"
#include "Modulus_Expr_Node.h"
#include "Number_Node.h"

class Expr_Tree_Builder : public Expr_Builder { 
public:
  Expr_Tree_Builder (void); 
  virtual ~Expr_Tree_Builder (void); 
  virtual void start_expression (void);
  virtual Number_Node * build_number (int n); 
  virtual Add_Expr_Node * build_add_operator (void); 
  virtual Subtract_Expr_Node * build_subtract_operator (void); 
  virtual Multiply_Expr_Node * build_multiply_operator (void);
  virtual Divide_Expr_Node * build_divide_operator (void );
  virtual Modulus_Expr_Node * build_modulus_operator (void);
  void build_Tree (Queue <Expr_Node *> & postfix, Stack <Expr_Node *> & stack);
  Expr_Tree * get_expression (void);
private: 
 // current state of expression tree 
  Expr_Tree * tree_;
 // other variables to coordinate build process 
}; 

#endif //!defined _EXPR_TREE_BUILDER_H_