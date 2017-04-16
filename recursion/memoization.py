cached = [None] * 41

def feb(n):
  if n <= 1:
      return n
  elif cached[n]:
      return cached[n]
  else:
      c = feb(n - 1) + feb(n - 2)
      cached[n] = c
      return c

print feb(40)

print cached