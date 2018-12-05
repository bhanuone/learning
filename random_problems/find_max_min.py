arr = [3, 1, 53, 7, 12, 45, 29, 31, 37, 25]

print min(arr), max(arr)

n = len(arr)

print n

if n % 2 == 0:
    if arr[0] > arr[1]:
        mx = arr[0]
        mn = arr[1]
    else:
        mx = arr[1]
        mn = arr[0]
    i = 2
else:
    mx = mn = arr[0]
    i = 1

while i < n - 1:
    if arr[i + 1] > arr[i]:
        if arr[i + 1] > mx:
            mx = arr[i + 1]
        if arr[i] < mn:
            mn = arr[i]
    else:
        if arr[i + 1] < mn:
            mn = arr[i + 1]
        if arr[i] > mx:
            mx = arr[i]
    i += 2
print mn, mx
    
