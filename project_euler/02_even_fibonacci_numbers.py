n = 4000000
a, b = 1, 2
sum = 2
while b < n:
  a, b = b, a + b
  if b % 2 == 0:
    sum += b    
print sum
