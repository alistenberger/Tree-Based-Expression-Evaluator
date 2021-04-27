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
#include "Calculator.h"

int main (int argc, char * argv []) {
  Calculator calc;
  calc.run ();

  return (0);
}