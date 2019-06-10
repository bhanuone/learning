n,m = [4, 8]#map(int, raw_input().split())

f = map(int, '31 26 15 10 24 13 19 8'.split())#map(int, raw_input().split())
f.sort()
print f

diff = f[-1] - f[1]

for i in range(0, m):
  if i + n - 1 < m:
    print f[i:i+n]
    diff = min(diff, f[i:i+n][-1] - f[i:i+n][0])


print diff

# n,m = map(int, raw_input().split())

# f = map(int, raw_input().split())

# f.sort()

# diff = f[-1] - f[1]

# for i in range(0, m):
#   if i + n - 1 < m:
#     diff = min(diff, f[i:i+n][-1] - f[i:i+n][0])


# print diff