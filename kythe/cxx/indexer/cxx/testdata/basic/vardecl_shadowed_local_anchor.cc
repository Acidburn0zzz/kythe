// Checks that the indexer finds and emits nodes for local variables.
//- VarNode.node/kind variable
//- VarNode named vname("x:0:0:foo#n", "", "", "", "c++")
//- VarNode2.node/kind variable
//- VarNode2 named vname("x:0:1:0:foo#n", "", "", "", "c++")
void foo() {
//- @x defines VarNode
  int x;
  {
//- @x defines VarNode2
    int x;
  }
}
