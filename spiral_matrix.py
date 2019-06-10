def spiral(a):
  l = t = 0
  r = len(a[0]) - 1
  b = len(a) - 1
  direc = 0
  res = []
  while l <= r and t <= b:
    if direc == 0:
      for i in range(l, r + 1):        
        res.append(a[t][i])
      t += 1
      direc = 1
    if direc == 1:
      for i in range(t, b + 1):
        res.append(a[i][r])
      r -= 1
      direc = 2
    if direc == 2:      
      for i in range(r, l - 1, -1):        
        res.append(a[b][i])
      b -= 1
      direc = 3
    if direc == 3:
      for i in range(b, t - 1, -1):        
        res.append(a[i][l])
      l += 1
      direc = 0
  return res

A = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]
]

print spiral(A)