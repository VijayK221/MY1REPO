POP=c(98,270,79,273,130,158,116,194,41,33,78,56,58,19,64,81,141,58,29,46,93,127,114,88,108,58,47,69,44,56,102,102,187,161,179,76,137,179,76,137,127,104,117,170,210,101,222,223,96,114,318,272,155,292,240,201,261,189)
sample(X,8,replace=FALSE)
sample(X,8,replace=TRUE)
S1=c(170,58,102,64,114,79,273,223)        #sample without replacement(SRSWOR)
S2=c(88,102,104,114,127,79,261,102)       #sample with replacement(SRSWR)
m=mean(POP)                               #population mean
m1=mean(S1)                               #mean of sample without replacement(SRSWOR)
m2=mean(S2)                               #mean of sample with replacement(SRSWR)
m
m1
m2
#Estimate of its variance
N=58
n=8
V1=var(S1)                                 #variance in the given data of without replacement(SRSWOR)
V1
V2=var(S2)                                 #variance of data in with replacement(SRSWR)
V2
V1s=((N-n)/(N*(n-1)))*V1                   #estimate of variance under without replacement(SRSWOR)
V1s
V2s=(1/(n-1))*V2                           #estimate of variance under with replacement(SRSWR)
V2s
#a 95% confidence interval is given 
C1=1.96*(sqrt(V1)/sqrt(n))
Con1=c(m1-C1,m1+C1)                        #final 95% confidence interval in case of without replacement(SRSWOR)
Con1
C2=1.96*(sqrt(V2)/sqrt(n))                 #final 95% confidence interval in case of with replacement(SRSWR)
C2
Con2=c(m2-C2,m2+C2)
Con2