inp = [8,22,7,9,31,19,5,13]

n = len(inp)
swaps = 0
def bubble_sort(array, size):
  global swaps
  for i in range(0, size - 2):
    sorted = True
    print array
    for j in range(0, size - i - 1):
      if array[j] > array[j + 1]:
        temp = array[j]
        array[j] = array[j + 1]
        array[j + 1] = temp
        swaps += 1
        sorted = False
    if sorted:
      break
  return array

print bubble_sort(inp, n)
print swaps