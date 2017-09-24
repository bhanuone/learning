A = [
  [1, 2, 3, 4],
  [5, 6, 7, 8], 
  [9, 10, 11, 12], 
  [13, 14, 15, 16]
]

# 1 4 7
# 2 5 8
# 3 6 9


def transpose(a):
  n = len(a)    
  d = 0
  while d < n: 
    c = d
    while c < n:
      temp = a[d][c]
      a[d][c] = a[c][d]
      a[c][d] = temp
      c += 1            
    d += 1
  return a


print transpose(A)
