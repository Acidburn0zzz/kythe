// The choice of which defn/decl to associate with is arbitrary. In reality,
// it is defined by the implementation, but it's useful to check if this
// changes.
//- @id defines IdDecl
template <typename T> T id(T x);
//- @id defines IdSpecDefn
//- IdSpecDefn specializes TAppIdSpecDefnInt
template <> int id(int x) { return x; }
//- @id defines IdDecl2
template <typename T> T id(T x);
//- @id defines IdSpecDefn2
//- IdSpecDefn2 specializes TAppIdSpecDefnFloat
template <> float id(float x) { return x; }
//- TAppIdSpecDefnInt param.0 IdDecl
//- TAppIdSpecDefnFloat param.0 IdDecl