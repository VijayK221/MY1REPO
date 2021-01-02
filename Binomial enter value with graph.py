import numpy as np
from scipy.stats import norm
import matplotlib.pyplot as plt
import seaborn as sns
from cmath import *

n = int(input("enter the value of n"))
x = int(input("enter the value of x"))
p = float(input("enter the value of p"))
q = 1 - p


def nCx(n, x):
    return ((fact(n) / (fact(x - 1)
                        * fact(n - x))))


# Returns factorial of n
def fact(n):
    res = 1
    for i in range(2, n + 1):
        res = res * i
    return res


px = float(nCx(n, x) * pow(p, x) * pow(q, n - x))
if (x <= n and x >= 0 and p <= 1 and p >= 0):
    print("the pdf value of BINOMIAL \npx = ", px)
else:
    print("you are entered wrong value\n ")
if (p <= 1 and p >= 0):
    print("the mean of binomial ->\nE(x)=", float(n * p))
v = float(n * p * q)
if (p <= 1 and p >= 0):
    print("the variance of binomial ->\nV(x)=", v)
sns.set()
x = np.arange(-n, 13, p)
plt.title(' probability density function')
plt.xlabel('size')
plt.ylabel('probability')
plt.plot(x, norm.pdf(x))
plt.show()
