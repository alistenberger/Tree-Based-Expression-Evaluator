#ifndef _BINARY_EXPR_NODE_H_
#define _BINARY_EXPR_NODE_H_

#include "Expr_Node.h"


class Binary_Expr_Node : public Expr_Node { 
public: 
  
  Binary_Expr_Node (void);

  virtual ~Binary_Expr_Node (void); 
  
  virtual int eval (void) = 0;
  
  //Accepts visitor
  virtual void accept (Expr_Node_Visitor & v) = 0;

	virtual Expr_Node * getLeft (void);
	
  virtual Expr_Node * getRight (void);
	
	virtual void setLeft (Expr_Node * left);
	
  virtual void setRight (Expr_Node * right);

  virtual int get_Precedence (void) = 0;

protected: 
 Expr_Node * right_; 
 Expr_Node * left_; 
};

#endif // !defined _BINARY_EXPR_NODE_H_