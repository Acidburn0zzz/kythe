// Checks that templates can accept typename arguments.

template
//- @T defines AbsT
<typename T>
//- @C defines CDecl1
class C;

template
//- @S defines AbsS
<typename S>
//- @C defines CDecl2
class C;

template
//- @V defines AbsV
<typename V>
//- @C defines CDefn
//- @C completes/uniquely CDecl1
//- @C completes/uniquely CDecl2
class C { };

//- AbsT.node/kind absvar
//- AbsS.node/kind absvar
//- AbsV.node/kind absvar
//- CDefn param.0 AbsV
//- CDecl2 param.0 AbsS
//- CDecl1 param.0 AbsT
