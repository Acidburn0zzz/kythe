// Checks that variable template defns complete variable template decls.
//- @z defines VarZAbsDecl
template <typename T> extern T z;
//- @z completes/uniquely VarZAbsDecl
template <typename T> T z;
