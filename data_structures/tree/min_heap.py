class MinHeap:
  def __init__(self):
    self.size = 1
    self.values = [None]

  def getLeftIndex(self, index):
    return 2 * index

  def getRightIndex(self, index):
    return 2 * index + 1

  def getParentIndex(self, index):    
    return index / 2

  def getParent(self, index):
    return self.values[self.getParentIndex(index)]

  def swap(self, i, j):
    tmp = self.values[j]
    self.values[j] = self.values[i]
    self.values[i] = tmp

  def heapifyDown(self):
    index =  1
    while True:
      l_index = self.getLeftIndex(index)
      r_index = self.getRightIndex(index)
      next_index = None
      if l_index >= self.size and r_index < self.size:
        next_index = r_index
      elif l_index < self.size and r_index >= self.size:
        next_index = l_index
      elif l_index < self.size and r_index < self.size:
        next_index = l_index if self.values[l_index] < self.values[r_index] else r_index
      else:
        break
      if self.values[next_index] < self.values[index]:
        self.swap(next_index, index)
        index = next_index
      else:
        break


  def elements(self):
    return self.values[1:self.size]

  def peek(self):
    return self.values[1]

  def heapifyBottomUp(self):
    index = self.size - 1
    while True:
      parentIndex = self.getParentIndex(index)
      if self.values[index] < self.values[parentIndex]:
        self.swap(index, parentIndex)
        index = parentIndex
      else:
        break

  def insert(self, value):
    self.values.append(value)
    self.size = len(self.values)
    self.heapifyBottomUp()

  def remove(self):
    if self.size == 1:
      print "Empty heap"
      return None
    print "removing, ", self.values[1]
    self.values[1] = self.values[self.size - 1]
    self.values.pop()
    self.size = len(self.values)
    self.heapifyDown()


mHeap = MinHeap()
mHeap.insert(53)
mHeap.insert(64)
mHeap.insert(50)
mHeap.insert(32)
mHeap.insert(41)
mHeap.insert(87)
mHeap.insert(90)
mHeap.insert(23)
mHeap.insert(14)
mHeap.insert(5)
print mHeap.elements()
mHeap.remove()
print mHeap.elements()
mHeap.remove()
print mHeap.elements()
mHeap.remove()
print mHeap.elements()
mHeap.insert(2)
print mHeap.elements()


