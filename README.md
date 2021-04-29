TO DO:

1. Figure out how to solve expressions inside of parenthesis
  - idea is to solve the parenthesis as their own expression and
  simply return a Number_Node with the solution. The logistics in the
  current iteration of this program are making this difficult
  
2. Incorporate stack and queue into tree builder so a recursive call can be done in the above 'to do'
  - Also will consolidate the building functions all to the builder so building is
  handled internally, rather than in two separate locations.
  
3. Fix memory leaks by figuring out a working method of deletion
  - likely using visitor to visit and delete nodes after result is pushed up
