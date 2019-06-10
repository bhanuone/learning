

# n = int(raw_input())
n = 8
# 8
# 1 0 0 0 1 0 0 0
# A = map(int, raw_input().split())
A = map(int, '1 0 0 0 1 0 0 0'.split())

max_zero_count = 0
max_zero_index_start = None

zero_seen_previously = False

current_zero_count = 0
current_zero_index_start = None

for i in range(n):
  if A[i] == 0:
    if zero_seen_previously:
      current_zero_count += 1
    else:
      current_zero_count = 1
      current_zero_index_start = i
    zero_seen_previously = True
  else:
    zero_seen_previously = False
    if max_zero_count <= current_zero_count:
      max_zero_count = current_zero_count
      max_zero_index_start = current_zero_index_start

# print max_zero_index_start,max_zero_count
# print current_zero_index_start, current_zero_count

if max_zero_count <= current_zero_count:
  max_zero_count = current_zero_count
  max_zero_index_start = current_zero_index_start
# print max_zero_index_start,max_zero_count
if max_zero_index_start == None:
  print n
else:
  for i in range(max_zero_index_start, max_zero_index_start + max_zero_count):
    A[i] = 1

  max_ones = 0
  temp_ones = 0

  for i in range(n):
    if A[i] == 1:
      temp_ones += 1
    else:      
      temp_ones = 0
    max_ones = max(max_ones, temp_ones)

  print max_ones
