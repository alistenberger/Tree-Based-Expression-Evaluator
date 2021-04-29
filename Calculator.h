#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include "Stack.h"
#include "Array.h"
#include "Base_Array.h"
#include "Fixed_Array.h"
#include <iostream>
#include <sstream>
#include <string>
#include "Eval_Expr_Tree.h"
#include "Expr_Node.h"
#include "Expr_Builder.h"
#include "Expr_Tree_Builder.h"
#include "Expr_Node_Visitor.h"
#include "Expr_Tree.h"
#include "Queue.h"

/**
 * @class Calculator
 *
 * A calculator which utilizes a Tree-Based Evaluator to calculate a given expression
 */

class Calculator
{
public: 
  /// Constructor
  Calculator (void);
  
  /// Destructor
  ~Calculator (void);

  /**
   * Parses an infix expression to postfix format
   * 
   * @param[in]     infix     the infix format delineated by spaces (or QUIT)
   * @param[in]     builder   the tree builder responsible for building the tree
   * @param[in]     postfix   the queue which will store the postfix expression to pass into the builder
   * 
   * @retval        returns true on successful completion
   */
  bool infix_to_postfix (const std::string & infix, Expr_Tree_Builder & builder, Queue <Expr_Node *> & postfix);
  
  /**
   * Evaluates a postfix expression utilizing a stack
   * 
   * @param[in]     builder   The tree builder is passed in for evaluation
   * 
   * @retval        result of the equation is returned upon successful evaluation
   */
  int evaluate_tree (Expr_Tree_Builder & builder);

  //Handles all of the operations in the order they need to be handled
  int run (void);
};

#endif // !defined _CALCULATOR_H_