#ifndef _EXPR_TREE_H_
#define _EXPR_TREE_H_

#include "Expr_Node.h"

class Expr_Tree {
public:
  Expr_Tree (void);
  ~Expr_Tree (void);
  void set_Head_Node (Expr_Node * node);
  Expr_Node * get_Head_Node (void);

protected:
  Expr_Node * headNode_;
};


#endif //!defined _EXPR_TREE_H_