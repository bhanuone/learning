# Slinding window technique basic
a = [3, 7, 1, 9, 4, 6, 2, 5, 8]
n = len(a)
m = 3
window_sum = sum(a[:m])

current_sum = window_sum

for i in range(m, n):
    current_sum += a[i]
    current_sum -= a[i - m]
    print i - m, i, current_sum
    window_sum = max(window_sum, current_sum)
print window_sum