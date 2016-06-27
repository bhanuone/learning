"""
  program for finding prime factors of a given number
  - Bhanu Prakash P
    15/5/2016
"""
import math
n = 55686132
factors = []
i = 3
while n % 2 == 0:
  n /= 2
  factors.append(2)
max_factor = math.floor(math.sqrt(n))
while(i < max_factor):
  while(n % i == 0):
    factors.append(i)
    n /= i
    max_factor = math.floor(math.sqrt(n))
  i += 1
if n > 1: factors.append(n);
print factors    