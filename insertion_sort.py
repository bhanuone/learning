inp =  [6, 4, 8, 3, 9, 5, 7]
n = len(inp)

def insertion_sort(array, size):
  for i in range(1, size):
    value = array[i]
    pointer = i
    while pointer > 0 and array[pointer - 1] > value:
      array[pointer] = array[pointer - 1]
      pointer -= 1
    array[pointer] = value
  return array

print insertion_sort(inp, n)