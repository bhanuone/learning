# Enter your code here. Read input from STDIN. Print output to STDOUT
N, M = map(int, raw_input().split())

arr = [0] * N;
old_max = 0
for i in range(M):
    a, b, k = map(int, raw_input().split())
    for j in range(a - 1, b):
        arr[j] += k
print max(arr)