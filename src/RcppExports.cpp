// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// algoritmo
NumericVector algoritmo(NumericMatrix Gn, NumericMatrix I, NumericMatrix J, int Niter, double error);
RcppExport SEXP _DTDA_cif_algoritmo(SEXP GnSEXP, SEXP ISEXP, SEXP JSEXP, SEXP NiterSEXP, SEXP errorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Gn(GnSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type I(ISEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type J(JSEXP);
    Rcpp::traits::input_parameter< int >::type Niter(NiterSEXP);
    Rcpp::traits::input_parameter< double >::type error(errorSEXP);
    rcpp_result_gen = Rcpp::wrap(algoritmo(Gn, I, J, Niter, error));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_DTDA_cif_algoritmo", (DL_FUNC) &_DTDA_cif_algoritmo, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_DTDA_cif(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
