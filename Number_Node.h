#ifndef _NUMBER_NODE_H_
#define _NUMBER_NODE_H_

#include "Expr_Node.h"


class Number_Node : public Expr_Node { 
public: 
  
  Number_Node (int number);

  virtual ~Number_Node (void); 
  // ... 
  virtual int eval (void);
  // use template method to provide common 
  // behavior for all binary nodes 
  virtual void accept (Expr_Node_Visitor & v); 

	virtual Expr_Node * getLeft (void);
	
  virtual Expr_Node * getRight (void);
	
	virtual void setLeft (Expr_Node * left);
	
  virtual void setRight (Expr_Node * right);

  virtual int get_Precedence (void);

protected: 
 int value_;
 int precedence_ = 0;
};

#endif // !defined _NUMBER_NODE_H_