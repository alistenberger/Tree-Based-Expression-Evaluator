#ifndef _EXPR_TREE_H_
#define _EXPR_TREE_H_

#include "Expr_Node.h"

class Expr_Tree {
public:
  Expr_Tree (void);
  ~Expr_Tree (void);
  void insertNode (Expr_Node & node);

protected:
  Expr_Node * headNode_;
};


#endif //!defined _EXPR_TREE_H_