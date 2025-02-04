% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/MVM.R
\name{VechM}
\alias{VechM}
\title{Matrix constructed from output of the Vech Command.  In other words, restore
the original symmetric matrix from its half-stacking vector.}
\usage{
VechM(vec)
}
\arguments{
\item{vec}{A vector representing the half-stacking of a symmetric matrix}
}
\value{
A symmetric matrix
}
\description{
Restores the symmetric matrix from the Vech command
}
\details{
This command re-construct a symmetric matrix from output of the Vech command
}
\examples{

v1 <- c(2, 1, 3)
m1 <- VechM(v1)
m1
}
\references{
Tsay (2014, Appendix A)
}
\seealso{
Vech
}
\author{
Ruey S. Tsay
}
