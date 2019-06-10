
N = int(raw_input())
minDiff = None
slices = map(int, raw_input().split(' '))
if N == 1:
  minDiff = slices[0]
else:
  slices.sort(reverse = True)
  minDiff = slices[0]
  for i in range(1, N):
    if minDiff >= 0:
      minDiff -= slices[i]
    else:
      minDiff += slices[i]
print abs(minDiff)
