from sympy import sqrt
from math import floor
n = int(input())
x = floor(sqrt(n))
t = (2*x) +1
r = (x*x) - n;
while r < 0 or r != pow(floor(sqrt(r)), 2):
  r = r+t
  t = t+2
x = (t-1)/2
y = sqrt(r)
print(x+y)
print(x-y)
