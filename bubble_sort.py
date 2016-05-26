# inp = [7, 3, 2, 4, 8, 5, 3, 5, 9, 3]
inp = [4, 6, 3, 5, 1, 2]
n = len(inp)

def bubble_sort(array, size):
  for i in range(0, size - 2):
    sorted = True
    print array
    for j in range(0, size - i - 1):
      if array[j] > array[j + 1]:
        temp = array[j]
        array[j] = array[j + 1]
        array[j + 1] = temp
        sorted = False
    if sorted:
      break
  return array

print bubble_sort(inp, n)