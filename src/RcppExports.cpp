// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// createBCT
Eigen::SparseMatrix<double, Eigen::RowMajor> createBCT(const IntegerMatrix& TL, int S);
RcppExport SEXP _destim_createBCT(SEXP TLSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type TL(TLSEXP);
    Rcpp::traits::input_parameter< int >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(createBCT(TL, S));
    return rcpp_result_gen;
END_RCPP
}
// createrectangleCT
Eigen::SparseMatrix<double, Eigen::RowMajor> createrectangleCT(const IntegerMatrix& TL, int x, int y);
RcppExport SEXP _destim_createrectangleCT(SEXP TLSEXP, SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type TL(TLSEXP);
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(createrectangleCT(TL, x, y));
    return rcpp_result_gen;
END_RCPP
}
// createTM
Eigen::SparseMatrix<double> createTM(const IntegerMatrix& TL, const NumericVector& transitions, const int& states);
RcppExport SEXP _destim_createTM(SEXP TLSEXP, SEXP transitionsSEXP, SEXP statesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type TL(TLSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type transitions(transitionsSEXP);
    Rcpp::traits::input_parameter< const int& >::type states(statesSEXP);
    rcpp_result_gen = Rcpp::wrap(createTM(TL, transitions, states));
    return rcpp_result_gen;
END_RCPP
}
// prueba
void prueba(const SEXP& CT);
RcppExport SEXP _destim_prueba(SEXP CTSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type CT(CTSEXP);
    prueba(CT);
    return R_NilValue;
END_RCPP
}
// createrectangleTL
IntegerMatrix createrectangleTL(int x, int y);
RcppExport SEXP _destim_createrectangleTL(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(createrectangleTL(x, y));
    return rcpp_result_gen;
END_RCPP
}
// createtransmatrix
NumericMatrix createtransmatrix(const SEXP& CT);
RcppExport SEXP _destim_createtransmatrix(SEXP CTSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type CT(CTSEXP);
    rcpp_result_gen = Rcpp::wrap(createtransmatrix(CT));
    return rcpp_result_gen;
END_RCPP
}
// cppfunique
NumericMatrix cppfunique(NumericMatrix mat, double tol);
RcppExport SEXP _destim_cppfunique(SEXP matSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(cppfunique(mat, tol));
    return rcpp_result_gen;
END_RCPP
}
// cppfuniqueind
IntegerVector cppfuniqueind(NumericMatrix mat, double tol);
RcppExport SEXP _destim_cppfuniqueind(SEXP matSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(cppfuniqueind(mat, tol));
    return rcpp_result_gen;
END_RCPP
}
// inittransitions
NumericVector inittransitions(const SEXP& CT);
RcppExport SEXP _destim_inittransitions(SEXP CTSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type CT(CTSEXP);
    rcpp_result_gen = Rcpp::wrap(inittransitions(CT));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_destim_createBCT", (DL_FUNC) &_destim_createBCT, 2},
    {"_destim_createrectangleCT", (DL_FUNC) &_destim_createrectangleCT, 3},
    {"_destim_createTM", (DL_FUNC) &_destim_createTM, 3},
    {"_destim_prueba", (DL_FUNC) &_destim_prueba, 1},
    {"_destim_createrectangleTL", (DL_FUNC) &_destim_createrectangleTL, 2},
    {"_destim_createtransmatrix", (DL_FUNC) &_destim_createtransmatrix, 1},
    {"_destim_cppfunique", (DL_FUNC) &_destim_cppfunique, 2},
    {"_destim_cppfuniqueind", (DL_FUNC) &_destim_cppfuniqueind, 2},
    {"_destim_inittransitions", (DL_FUNC) &_destim_inittransitions, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_destim(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
