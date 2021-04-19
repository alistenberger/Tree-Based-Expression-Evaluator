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
  virtual void print_preorder (std::ostream &); 

  virtual void print_inorder (std::ostream &); 

protected: 
 Expr_Node * parent_Node_; 
};

#endif // !defined _NUMBER_NODE_H_