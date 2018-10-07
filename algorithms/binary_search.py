def binary_search(array, el):
  lo = 0
  hi = len(array) - 1    
  while lo <= hi:
    mid = lo + (hi - lo) / 2        
    if el == array[mid]:
      return mid
    elif el > array[mid]:
      lo = mid + 1
    else:
      hi = mid - 1
  return -1

print binary_search([0, 5, 13, 19, 22, 41, 55, 68, 72, 81, 98], 55)
            