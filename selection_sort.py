inp = [7, 3, 2, 4, 8, 5, 3, 5, 9, 3]
n = len(inp)



def selection_sort(array, size):
  for i in range(size - 1):
    iMin = i
    for j in range(i + 1, size):
      if array[j] < array[iMin]:
        iMin = j
    temp = array[iMin]
    array[iMin] = array[i]
    array[i] = temp
  return array

print selection_sort(inp, n)

