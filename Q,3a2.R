#Binomial distribution
n=12
p=0.25
size=10
rbinom(size,n,p)
m1=n*p
m1
v1=n*p*(1-p)
v1
#poisson
lemda=5.2
rpois(10,lemda)
m2=lemda
V2=lemda
#normal distribution
mu=3.5
vari=5.75
rnorm(10,mu,vari)
#BIVARIATE DISTRIBUTION
mu1=(c(15.7,42.8))
x=(c(9.2*9.2,0.79*9.2*11.7,0.79*9.2*11.7,11.7*11.7))
sigma=matrix(nrow=2,data=x,byrow=TRUE)
sigma
library(MASS)
A=mvrnorm(10,mu1,sigma)
A
m4=mean(A[,1])
m4
m5=mean(A[,2])
m5
var(A[,1])
var(A[,2])
#As we increse the sample size we are getting variance lesserb