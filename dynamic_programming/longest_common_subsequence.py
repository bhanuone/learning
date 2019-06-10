# Bhanu Prakash
# 1/10/17

def lcs(a, b, m, n):
    if m < 0 or n < 0:
        return 0
    if a[m] == b[n]:
        return 1 + lcs(a, b, m - 1, n - 1)
    else:
        return max(lcs(a, b, m - 1, n), lcs(a, b, m, n - 1))

a = "ZXYZAZXWR"
b = "XYZADFDS"
m = len(a) - 1
n = len(b) - 1
print lcs(a, b, m, n)