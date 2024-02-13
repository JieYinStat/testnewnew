#include <Rcpp.h>
using namespace Rcpp;

//' Multiply a number by two
//'
//' Multiply a number two times.
//'
//' @param x A single integer.
//' @return a integer.
//' @export
// [[Rcpp::export]]
 int timesTwo(int x) {
   return x * 2;
 }
