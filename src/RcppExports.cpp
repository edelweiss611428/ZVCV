// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// squareNorm
arma::mat squareNorm(const arma::mat& samples, const Rcpp::Nullable<Rcpp::IntegerVector>& nystrom_inds);
RcppExport SEXP _ZVCV_squareNorm(SEXP samplesSEXP, SEXP nystrom_indsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::IntegerVector>& >::type nystrom_inds(nystrom_indsSEXP);
    rcpp_result_gen = Rcpp::wrap(squareNorm(samples, nystrom_inds));
    return rcpp_result_gen;
END_RCPP
}
// medianTune
double medianTune(const arma::mat& samples, const Rcpp::Nullable<Rcpp::NumericMatrix>& Z);
RcppExport SEXP _ZVCV_medianTune(SEXP samplesSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericMatrix>& >::type Z(ZSEXP);
    rcpp_result_gen = Rcpp::wrap(medianTune(samples, Z));
    return rcpp_result_gen;
END_RCPP
}
// K0_fn
arma::mat K0_fn(const arma::mat& samples, const arma::mat& derivatives, arma::vec sigma, unsigned int steinOrder, std::string kernel_function, const Rcpp::Nullable<Rcpp::NumericMatrix>& Z, const Rcpp::Nullable<Rcpp::IntegerVector>& nystrom_inds);
RcppExport SEXP _ZVCV_K0_fn(SEXP samplesSEXP, SEXP derivativesSEXP, SEXP sigmaSEXP, SEXP steinOrderSEXP, SEXP kernel_functionSEXP, SEXP ZSEXP, SEXP nystrom_indsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type derivatives(derivativesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type steinOrder(steinOrderSEXP);
    Rcpp::traits::input_parameter< std::string >::type kernel_function(kernel_functionSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericMatrix>& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::IntegerVector>& >::type nystrom_inds(nystrom_indsSEXP);
    rcpp_result_gen = Rcpp::wrap(K0_fn(samples, derivatives, sigma, steinOrder, kernel_function, Z, nystrom_inds));
    return rcpp_result_gen;
END_RCPP
}
// nearPD
arma::mat nearPD(arma::mat K0);
RcppExport SEXP _ZVCV_nearPD(SEXP K0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type K0(K0SEXP);
    rcpp_result_gen = Rcpp::wrap(nearPD(K0));
    return rcpp_result_gen;
END_RCPP
}
// Phi_fn_cpp
arma::mat Phi_fn_cpp(const arma::mat& samples, const arma::mat& derivatives, Rcpp::Function getX, Rcpp::Nullable<unsigned int> polyorder, Rcpp::Nullable<Rcpp::IntegerVector> subset);
RcppExport SEXP _ZVCV_Phi_fn_cpp(SEXP samplesSEXP, SEXP derivativesSEXP, SEXP getXSEXP, SEXP polyorderSEXP, SEXP subsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type derivatives(derivativesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type getX(getXSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type polyorder(polyorderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type subset(subsetSEXP);
    rcpp_result_gen = Rcpp::wrap(Phi_fn_cpp(samples, derivatives, getX, polyorder, subset));
    return rcpp_result_gen;
END_RCPP
}
// CF_cpp
Rcpp::List CF_cpp(const arma::mat& integrands, const arma::mat& samples, const arma::mat& derivatives, Rcpp::Nullable<unsigned int> steinOrder, Rcpp::Nullable<Rcpp::String> kernel_function, Rcpp::Nullable<arma::vec> sigma, const Rcpp::Nullable<Rcpp::NumericMatrix>& K0, bool one_in_denom, bool diagnostics);
RcppExport SEXP _ZVCV_CF_cpp(SEXP integrandsSEXP, SEXP samplesSEXP, SEXP derivativesSEXP, SEXP steinOrderSEXP, SEXP kernel_functionSEXP, SEXP sigmaSEXP, SEXP K0SEXP, SEXP one_in_denomSEXP, SEXP diagnosticsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type integrands(integrandsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type derivatives(derivativesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type steinOrder(steinOrderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type kernel_function(kernel_functionSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericMatrix>& >::type K0(K0SEXP);
    Rcpp::traits::input_parameter< bool >::type one_in_denom(one_in_denomSEXP);
    Rcpp::traits::input_parameter< bool >::type diagnostics(diagnosticsSEXP);
    rcpp_result_gen = Rcpp::wrap(CF_cpp(integrands, samples, derivatives, steinOrder, kernel_function, sigma, K0, one_in_denom, diagnostics));
    return rcpp_result_gen;
END_RCPP
}
// CF_unbiased_cpp
Rcpp::List CF_unbiased_cpp(const arma::mat& integrands, const arma::mat& samples, const arma::mat& derivatives, arma::uvec est_inds, Rcpp::Nullable<unsigned int> steinOrder, Rcpp::Nullable<Rcpp::String> kernel_function, Rcpp::Nullable<arma::vec> sigma, const Rcpp::Nullable<Rcpp::NumericMatrix>& K0, bool one_in_denom, bool diagnostics);
RcppExport SEXP _ZVCV_CF_unbiased_cpp(SEXP integrandsSEXP, SEXP samplesSEXP, SEXP derivativesSEXP, SEXP est_indsSEXP, SEXP steinOrderSEXP, SEXP kernel_functionSEXP, SEXP sigmaSEXP, SEXP K0SEXP, SEXP one_in_denomSEXP, SEXP diagnosticsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type integrands(integrandsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type derivatives(derivativesSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type est_inds(est_indsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type steinOrder(steinOrderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type kernel_function(kernel_functionSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericMatrix>& >::type K0(K0SEXP);
    Rcpp::traits::input_parameter< bool >::type one_in_denom(one_in_denomSEXP);
    Rcpp::traits::input_parameter< bool >::type diagnostics(diagnosticsSEXP);
    rcpp_result_gen = Rcpp::wrap(CF_unbiased_cpp(integrands, samples, derivatives, est_inds, steinOrder, kernel_function, sigma, K0, one_in_denom, diagnostics));
    return rcpp_result_gen;
END_RCPP
}
// CF_crossval_cpp
Rcpp::List CF_crossval_cpp(arma::mat integrands, arma::mat samples, arma::mat derivatives, Rcpp::Nullable<unsigned int> steinOrder, Rcpp::Nullable<Rcpp::String> kernel_function, Rcpp::Nullable<Rcpp::List> sigma, const Rcpp::Nullable<Rcpp::List>& K0, Rcpp::Nullable<unsigned int> folds, const Rcpp::Nullable<Rcpp::IntegerVector>& est_inds, const Rcpp::Nullable<Rcpp::NumericVector>& input_weights, bool one_in_denom, bool diagnostics);
RcppExport SEXP _ZVCV_CF_crossval_cpp(SEXP integrandsSEXP, SEXP samplesSEXP, SEXP derivativesSEXP, SEXP steinOrderSEXP, SEXP kernel_functionSEXP, SEXP sigmaSEXP, SEXP K0SEXP, SEXP foldsSEXP, SEXP est_indsSEXP, SEXP input_weightsSEXP, SEXP one_in_denomSEXP, SEXP diagnosticsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type integrands(integrandsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type derivatives(derivativesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type steinOrder(steinOrderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type kernel_function(kernel_functionSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::List>& >::type K0(K0SEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type folds(foldsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::IntegerVector>& >::type est_inds(est_indsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericVector>& >::type input_weights(input_weightsSEXP);
    Rcpp::traits::input_parameter< bool >::type one_in_denom(one_in_denomSEXP);
    Rcpp::traits::input_parameter< bool >::type diagnostics(diagnosticsSEXP);
    rcpp_result_gen = Rcpp::wrap(CF_crossval_cpp(integrands, samples, derivatives, steinOrder, kernel_function, sigma, K0, folds, est_inds, input_weights, one_in_denom, diagnostics));
    return rcpp_result_gen;
END_RCPP
}
// SECF_cpp
Rcpp::List SECF_cpp(const arma::mat& integrands, const arma::mat& samples, const arma::mat& derivatives, Rcpp::Function getX, Rcpp::Nullable<unsigned int> polyorder, Rcpp::Nullable<unsigned int> steinOrder, Rcpp::Nullable<Rcpp::String> kernel_function, Rcpp::Nullable<arma::vec> sigma, const Rcpp::Nullable<Rcpp::NumericMatrix>& K0, Rcpp::Nullable<Rcpp::IntegerVector> subset, bool diagnostics);
RcppExport SEXP _ZVCV_SECF_cpp(SEXP integrandsSEXP, SEXP samplesSEXP, SEXP derivativesSEXP, SEXP getXSEXP, SEXP polyorderSEXP, SEXP steinOrderSEXP, SEXP kernel_functionSEXP, SEXP sigmaSEXP, SEXP K0SEXP, SEXP subsetSEXP, SEXP diagnosticsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type integrands(integrandsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type derivatives(derivativesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type getX(getXSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type polyorder(polyorderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type steinOrder(steinOrderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type kernel_function(kernel_functionSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericMatrix>& >::type K0(K0SEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type subset(subsetSEXP);
    Rcpp::traits::input_parameter< bool >::type diagnostics(diagnosticsSEXP);
    rcpp_result_gen = Rcpp::wrap(SECF_cpp(integrands, samples, derivatives, getX, polyorder, steinOrder, kernel_function, sigma, K0, subset, diagnostics));
    return rcpp_result_gen;
END_RCPP
}
// SECF_unbiased_cpp
Rcpp::List SECF_unbiased_cpp(const arma::mat& integrands, const arma::mat& samples, const arma::mat& derivatives, arma::uvec est_inds, Rcpp::Function getX, Rcpp::Nullable<unsigned int> polyorder, Rcpp::Nullable<unsigned int> steinOrder, Rcpp::Nullable<Rcpp::String> kernel_function, Rcpp::Nullable<arma::vec> sigma, const Rcpp::Nullable<Rcpp::NumericMatrix>& K0, Rcpp::Nullable<Rcpp::IntegerVector> subset, bool diagnostics);
RcppExport SEXP _ZVCV_SECF_unbiased_cpp(SEXP integrandsSEXP, SEXP samplesSEXP, SEXP derivativesSEXP, SEXP est_indsSEXP, SEXP getXSEXP, SEXP polyorderSEXP, SEXP steinOrderSEXP, SEXP kernel_functionSEXP, SEXP sigmaSEXP, SEXP K0SEXP, SEXP subsetSEXP, SEXP diagnosticsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type integrands(integrandsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type derivatives(derivativesSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type est_inds(est_indsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type getX(getXSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type polyorder(polyorderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type steinOrder(steinOrderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type kernel_function(kernel_functionSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericMatrix>& >::type K0(K0SEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type subset(subsetSEXP);
    Rcpp::traits::input_parameter< bool >::type diagnostics(diagnosticsSEXP);
    rcpp_result_gen = Rcpp::wrap(SECF_unbiased_cpp(integrands, samples, derivatives, est_inds, getX, polyorder, steinOrder, kernel_function, sigma, K0, subset, diagnostics));
    return rcpp_result_gen;
END_RCPP
}
// SECF_crossval_cpp
Rcpp::List SECF_crossval_cpp(const arma::mat& integrands, const arma::mat& samples, const arma::mat& derivatives, Rcpp::Function getX, Rcpp::Nullable<unsigned int> polyorder, Rcpp::Nullable<unsigned int> steinOrder, Rcpp::Nullable<Rcpp::String> kernel_function, Rcpp::Nullable<Rcpp::List> sigma, const Rcpp::Nullable<Rcpp::List>& K0, Rcpp::Nullable<Rcpp::IntegerVector> subset, Rcpp::Nullable<unsigned int> folds, const Rcpp::Nullable<Rcpp::IntegerVector>& est_inds, bool diagnostics);
RcppExport SEXP _ZVCV_SECF_crossval_cpp(SEXP integrandsSEXP, SEXP samplesSEXP, SEXP derivativesSEXP, SEXP getXSEXP, SEXP polyorderSEXP, SEXP steinOrderSEXP, SEXP kernel_functionSEXP, SEXP sigmaSEXP, SEXP K0SEXP, SEXP subsetSEXP, SEXP foldsSEXP, SEXP est_indsSEXP, SEXP diagnosticsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type integrands(integrandsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type derivatives(derivativesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type getX(getXSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type polyorder(polyorderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type steinOrder(steinOrderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type kernel_function(kernel_functionSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::List>& >::type K0(K0SEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type subset(subsetSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type folds(foldsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::IntegerVector>& >::type est_inds(est_indsSEXP);
    Rcpp::traits::input_parameter< bool >::type diagnostics(diagnosticsSEXP);
    rcpp_result_gen = Rcpp::wrap(SECF_crossval_cpp(integrands, samples, derivatives, getX, polyorder, steinOrder, kernel_function, sigma, K0, subset, folds, est_inds, diagnostics));
    return rcpp_result_gen;
END_RCPP
}
// aSECF_cpp_prep
Rcpp::List aSECF_cpp_prep(const arma::mat& integrands, const arma::mat& samples, const arma::mat& derivatives, Rcpp::Function getX, Rcpp::Nullable<unsigned int> polyorder, Rcpp::Nullable<unsigned int> steinOrder, Rcpp::Nullable<Rcpp::String> kernel_function, Rcpp::Nullable<arma::vec> sigma, const Rcpp::Nullable<Rcpp::NumericMatrix>& K0, Rcpp::Nullable<Rcpp::IntegerVector> subset, const Rcpp::Nullable<Rcpp::IntegerVector>& nystrom_inds, bool conjugate_gradient);
RcppExport SEXP _ZVCV_aSECF_cpp_prep(SEXP integrandsSEXP, SEXP samplesSEXP, SEXP derivativesSEXP, SEXP getXSEXP, SEXP polyorderSEXP, SEXP steinOrderSEXP, SEXP kernel_functionSEXP, SEXP sigmaSEXP, SEXP K0SEXP, SEXP subsetSEXP, SEXP nystrom_indsSEXP, SEXP conjugate_gradientSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type integrands(integrandsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type derivatives(derivativesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type getX(getXSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type polyorder(polyorderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type steinOrder(steinOrderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type kernel_function(kernel_functionSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericMatrix>& >::type K0(K0SEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type subset(subsetSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::IntegerVector>& >::type nystrom_inds(nystrom_indsSEXP);
    Rcpp::traits::input_parameter< bool >::type conjugate_gradient(conjugate_gradientSEXP);
    rcpp_result_gen = Rcpp::wrap(aSECF_cpp_prep(integrands, samples, derivatives, getX, polyorder, steinOrder, kernel_function, sigma, K0, subset, nystrom_inds, conjugate_gradient));
    return rcpp_result_gen;
END_RCPP
}
// aSECF_unbiased_cpp_prep
Rcpp::List aSECF_unbiased_cpp_prep(const arma::mat& integrands, const arma::mat& samples, const arma::mat& derivatives, arma::uvec est_inds, Rcpp::Function getX, Rcpp::Function aSECF_mse_linsolve, Rcpp::Nullable<unsigned int> polyorder, Rcpp::Nullable<unsigned int> steinOrder, Rcpp::Nullable<Rcpp::String> kernel_function, Rcpp::Nullable<arma::vec> sigma, const Rcpp::Nullable<Rcpp::NumericMatrix>& K0, Rcpp::Nullable<Rcpp::IntegerVector> subset, const Rcpp::Nullable<Rcpp::IntegerVector>& nystrom_inds, bool conjugate_gradient, double reltol, bool diagnostics);
RcppExport SEXP _ZVCV_aSECF_unbiased_cpp_prep(SEXP integrandsSEXP, SEXP samplesSEXP, SEXP derivativesSEXP, SEXP est_indsSEXP, SEXP getXSEXP, SEXP aSECF_mse_linsolveSEXP, SEXP polyorderSEXP, SEXP steinOrderSEXP, SEXP kernel_functionSEXP, SEXP sigmaSEXP, SEXP K0SEXP, SEXP subsetSEXP, SEXP nystrom_indsSEXP, SEXP conjugate_gradientSEXP, SEXP reltolSEXP, SEXP diagnosticsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type integrands(integrandsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type derivatives(derivativesSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type est_inds(est_indsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type getX(getXSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type aSECF_mse_linsolve(aSECF_mse_linsolveSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type polyorder(polyorderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type steinOrder(steinOrderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type kernel_function(kernel_functionSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericMatrix>& >::type K0(K0SEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type subset(subsetSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::IntegerVector>& >::type nystrom_inds(nystrom_indsSEXP);
    Rcpp::traits::input_parameter< bool >::type conjugate_gradient(conjugate_gradientSEXP);
    Rcpp::traits::input_parameter< double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< bool >::type diagnostics(diagnosticsSEXP);
    rcpp_result_gen = Rcpp::wrap(aSECF_unbiased_cpp_prep(integrands, samples, derivatives, est_inds, getX, aSECF_mse_linsolve, polyorder, steinOrder, kernel_function, sigma, K0, subset, nystrom_inds, conjugate_gradient, reltol, diagnostics));
    return rcpp_result_gen;
END_RCPP
}
// aSECF_crossval_cpp
arma::mat aSECF_crossval_cpp(const arma::mat& integrands, const arma::mat& samples, const arma::mat& derivatives, Rcpp::Function getX, Rcpp::Function aSECF_mse_linsolve, unsigned int num_nystrom, Rcpp::Nullable<unsigned int> polyorder, Rcpp::Nullable<unsigned int> steinOrder, Rcpp::Nullable<Rcpp::String> kernel_function, Rcpp::Nullable<Rcpp::List> sigma, Rcpp::Nullable<Rcpp::IntegerVector> subset, Rcpp::Nullable<unsigned int> folds, bool conjugate_gradient, double reltol, const Rcpp::Nullable<Rcpp::IntegerVector>& est_inds);
RcppExport SEXP _ZVCV_aSECF_crossval_cpp(SEXP integrandsSEXP, SEXP samplesSEXP, SEXP derivativesSEXP, SEXP getXSEXP, SEXP aSECF_mse_linsolveSEXP, SEXP num_nystromSEXP, SEXP polyorderSEXP, SEXP steinOrderSEXP, SEXP kernel_functionSEXP, SEXP sigmaSEXP, SEXP subsetSEXP, SEXP foldsSEXP, SEXP conjugate_gradientSEXP, SEXP reltolSEXP, SEXP est_indsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type integrands(integrandsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type derivatives(derivativesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type getX(getXSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type aSECF_mse_linsolve(aSECF_mse_linsolveSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_nystrom(num_nystromSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type polyorder(polyorderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type steinOrder(steinOrderSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type kernel_function(kernel_functionSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List> >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type subset(subsetSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<unsigned int> >::type folds(foldsSEXP);
    Rcpp::traits::input_parameter< bool >::type conjugate_gradient(conjugate_gradientSEXP);
    Rcpp::traits::input_parameter< double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::IntegerVector>& >::type est_inds(est_indsSEXP);
    rcpp_result_gen = Rcpp::wrap(aSECF_crossval_cpp(integrands, samples, derivatives, getX, aSECF_mse_linsolve, num_nystrom, polyorder, steinOrder, kernel_function, sigma, subset, folds, conjugate_gradient, reltol, est_inds));
    return rcpp_result_gen;
END_RCPP
}
// get_all_combins
arma::umat get_all_combins(arma::umat mymat, unsigned int polyorder);
RcppExport SEXP _ZVCV_get_all_combins(SEXP mymatSEXP, SEXP polyorderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::umat >::type mymat(mymatSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type polyorder(polyorderSEXP);
    rcpp_result_gen = Rcpp::wrap(get_all_combins(mymat, polyorder));
    return rcpp_result_gen;
END_RCPP
}
// getPoly_withoutpackage
arma::mat getPoly_withoutpackage(arma::mat samples, arma::mat derivatives, arma::mat combinations);
RcppExport SEXP _ZVCV_getPoly_withoutpackage(SEXP samplesSEXP, SEXP derivativesSEXP, SEXP combinationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type derivatives(derivativesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type combinations(combinationsSEXP);
    rcpp_result_gen = Rcpp::wrap(getPoly_withoutpackage(samples, derivatives, combinations));
    return rcpp_result_gen;
END_RCPP
}
// getPoly_withpackage
arma::mat getPoly_withpackage(arma::mat samples, arma::mat derivatives, Rcpp::List combinations);
RcppExport SEXP _ZVCV_getPoly_withpackage(SEXP samplesSEXP, SEXP derivativesSEXP, SEXP combinationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type derivatives(derivativesSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type combinations(combinationsSEXP);
    rcpp_result_gen = Rcpp::wrap(getPoly_withpackage(samples, derivatives, combinations));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ZVCV_squareNorm", (DL_FUNC) &_ZVCV_squareNorm, 2},
    {"_ZVCV_medianTune", (DL_FUNC) &_ZVCV_medianTune, 2},
    {"_ZVCV_K0_fn", (DL_FUNC) &_ZVCV_K0_fn, 7},
    {"_ZVCV_nearPD", (DL_FUNC) &_ZVCV_nearPD, 1},
    {"_ZVCV_Phi_fn_cpp", (DL_FUNC) &_ZVCV_Phi_fn_cpp, 5},
    {"_ZVCV_CF_cpp", (DL_FUNC) &_ZVCV_CF_cpp, 9},
    {"_ZVCV_CF_unbiased_cpp", (DL_FUNC) &_ZVCV_CF_unbiased_cpp, 10},
    {"_ZVCV_CF_crossval_cpp", (DL_FUNC) &_ZVCV_CF_crossval_cpp, 12},
    {"_ZVCV_SECF_cpp", (DL_FUNC) &_ZVCV_SECF_cpp, 11},
    {"_ZVCV_SECF_unbiased_cpp", (DL_FUNC) &_ZVCV_SECF_unbiased_cpp, 12},
    {"_ZVCV_SECF_crossval_cpp", (DL_FUNC) &_ZVCV_SECF_crossval_cpp, 13},
    {"_ZVCV_aSECF_cpp_prep", (DL_FUNC) &_ZVCV_aSECF_cpp_prep, 12},
    {"_ZVCV_aSECF_unbiased_cpp_prep", (DL_FUNC) &_ZVCV_aSECF_unbiased_cpp_prep, 16},
    {"_ZVCV_aSECF_crossval_cpp", (DL_FUNC) &_ZVCV_aSECF_crossval_cpp, 15},
    {"_ZVCV_get_all_combins", (DL_FUNC) &_ZVCV_get_all_combins, 2},
    {"_ZVCV_getPoly_withoutpackage", (DL_FUNC) &_ZVCV_getPoly_withoutpackage, 3},
    {"_ZVCV_getPoly_withpackage", (DL_FUNC) &_ZVCV_getPoly_withpackage, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_ZVCV(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
