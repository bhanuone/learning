#!/bin/python

import sys


g = int(raw_input().strip())
for a0 in xrange(g):
  n,m,x = raw_input().strip().split(' ')
  n,m,x = [int(n),int(m),int(x)]
  a = map(int, raw_input().strip().split(' '))
  b = map(int, raw_input().strip().split(' '))
  # your code goes here
  ai = bi = 0;
  # print a
  # print b
  running_sum = blocks_removed = 0;
  while ai < len(a) and bi < len(b):
    el = min(a[ai], b[bi])
    if running_sum + el < x:
      blocks_removed += 1
      running_sum += el
    else:
      break
    if a[ai] <= b[bi]:
      ai += 1
    else:
      bi += 1
  while ai < len(a):
    top = a[ai]
    if running_sum + top < x:
      blocks_removed += 1
      running_sum += top
      ai += 1
    else:
      break
  while bi < len(b):
    top = b[bi]
    if running_sum + top < x:
      blocks_removed += 1
      running_sum += top
      bi += 1
    else:
      break
  print blocks_removed
