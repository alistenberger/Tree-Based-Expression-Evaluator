#ifndef _PRINT_INORDER_EXPRESSION_H_
#define _PRINT_INORDER_EXPRESSION_H_

#include "Expr_Node_Visitor.h"
#include <iostream>

//I'm not sure if this is a requirement or not as I saw it in the slides, but it isn't mentioned in the assignment document

class Print_Inorder_Expression : public Expr_Node_Visitor { 
public: 
  Print_Inorder_Expression (std::ostream & out);
  virtual ~Print_Inorder_Expression (void); 
  // Methods for visiting concrete nodes 
  virtual void Visit_Add_Node (const Add_Expr_Node & node); 
  virtual void Visit_Subtract_Node (const Subtract_Expr_Node & node);
  virtual void Visit_Multiply_Node (const Multiply_Expr_Node & node);
  virtual void Visit_Divide_Node (const Divide_Expr_Node & node);
  virtual void Visit_Modulus_Node (const Modulus_Expr_Node & node);
  virtual void Visit_Number_Node (const Number_Node & node); 
private: 
 // output stream 
  std::ostream out_; 
}; 

#endif //!defined _PRINT_INORDER_EXPRESSION_H_