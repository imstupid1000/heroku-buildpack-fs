// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// move_
void move_(std::string path, std::string new_path);
RcppExport SEXP _fs_move_(SEXP pathSEXP, SEXP new_pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type new_path(new_pathSEXP);
    move_(path, new_path);
    return R_NilValue;
END_RCPP
}
// realpath_
std::string realpath_(std::string path);
RcppExport SEXP _fs_realpath_(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(realpath_(path));
    return rcpp_result_gen;
END_RCPP
}
// close_uv_
void close_uv_();
RcppExport SEXP _fs_close_uv_() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    close_uv_();
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fs_move_", (DL_FUNC) &_fs_move_, 2},
    {"_fs_realpath_", (DL_FUNC) &_fs_realpath_, 1},
    {"_fs_close_uv_", (DL_FUNC) &_fs_close_uv_, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_fs(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
