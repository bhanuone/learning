#!/bin/python

import sys

def saveThePrisoner(n, m, s):
    val = (s + m - 1) % n
    if val == 0:
      return n
    else:
      return val

t = int(raw_input().strip())
# file = open("output00.txt", "r")
for a0 in xrange(t):
    n, m, s = raw_input().strip().split(' ')
    n, m, s = [int(n), int(m), int(s)]
    result = saveThePrisoner(n, m, s)
    print result
    # exp = file.readline()
    # if str(result) != exp:
      # print n, m, s
