// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// varmaResiduals
Eigen::MatrixXd varmaResiduals(const Eigen::Map<Eigen::MatrixXd>& zt, const Eigen::Map<Eigen::VectorXd>& Ph0, const Eigen::Map<Eigen::MatrixXd>& PH, const Eigen::Map<Eigen::MatrixXd>& TH, int p, int q, int include_mean, const Eigen::Map<Eigen::MatrixXd>& beta);
RcppExport SEXP _MTS_varmaResiduals(SEXP ztSEXP, SEXP Ph0SEXP, SEXP PHSEXP, SEXP THSEXP, SEXP pSEXP, SEXP qSEXP, SEXP include_meanSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type zt(ztSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type Ph0(Ph0SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type PH(PHSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type TH(THSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type include_mean(include_meanSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(varmaResiduals(zt, Ph0, PH, TH, p, q, include_mean, beta));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP GetSVarmaResiduals(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP GetVarmaResiduals(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP GetVMAObs(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP GetVMATH(SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_MTS_varmaResiduals", (DL_FUNC) &_MTS_varmaResiduals, 8},
    {"GetSVarmaResiduals", (DL_FUNC) &GetSVarmaResiduals, 9},
    {"GetVarmaResiduals",  (DL_FUNC) &GetVarmaResiduals,  6},
    {"GetVMAObs",          (DL_FUNC) &GetVMAObs,          5},
    {"GetVMATH",           (DL_FUNC) &GetVMATH,           5},
    {NULL, NULL, 0}
};

RcppExport void R_init_MTS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
