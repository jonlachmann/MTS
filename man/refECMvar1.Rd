% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/MTS.R
\name{refECMvar1}
\alias{refECMvar1}
\title{Refining ECM for a VAR process}
\usage{
refECMvar1(m1, thres = 1)
}
\arguments{
\item{m1}{An object of the ECMvar1 command or the refECMvar1 command}

\item{thres}{Threshold for individual t-ratio. Default is 1.}
}
\value{
Constrained estimation results of an ECM VAR model
}
\description{
Performs constrained least squares estimation of a ECM VAR model with known
co-integrated processes
}
\details{
Setting all estimates with t-ration less than the threshold, in absoluate
value, to zero simultaneously.
}
\references{
Tsay (2014, Chapter 5). Multivariate Time Series Analysis with R
and Financial Applications. John Wiley. Hoboken, NJ.
}
\seealso{
ECMvar1, refECMvar
}
\author{
Ruey S. Tsay
}
