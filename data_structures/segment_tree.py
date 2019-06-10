from math import pow, log, ceil

def construct_segment_tree(array):
  n = len(array)
  height = ceil(log(n, 2))
  size = int(2*pow(2, height))
  seg_tree_array = [0] * size
  construct_segment(0, 0, n - 1, array, seg_tree_array)
  return seg_tree_array

def construct_segment(current_index, start_index, end_index, array, seg_tree_array):
  print(seg_tree_array)
  if start_index == end_index:
    seg_tree_array[current_index] = array[start_index]
  else:
    mid = start_index + end_index / 2
    k = construct_segment(2*current_index + 1, start_index, mid, array, seg_tree_array) \
      + construct_segment(2*current_index + 2, mid + 1, end_index, array, seg_tree_array)
    seg_tree_array[current_index] = k 
  return seg_tree_array[current_index]

seg_tree = construct_segment_tree([i for i in range(1, 3)])
print(seg_tree)
print(len(seg_tree))