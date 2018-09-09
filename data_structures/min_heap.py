class MinHeap:
    
    def __init__(self):
        self.data = []
        self.size = 0       
    
    def peak(self):
        if self.size == 0:
            return None
        return self.data[0]
    
    def insert(self, element):
        self.data.append(element)
        self.size += 1
        self.heapifyUp()
       
    def remove(self):
        top = self.data[0]
        self.data[0] = self.data[self.size - 1]
        self.size -= 1
        self.heapifyDown()
        return top
    
    def __str__(self):
        return str(self.data[:self.size])
    
    def heapifyUp(self):
        index = self.size - 1        
        while self.has_parent(index) and self.get_parent(index) > self.data[index]:
            parent_index = self.get_parent_index(index)
            self.swap_elements(index, parent_index)            
            index = parent_index
      
    def heapifyDown(self):
        index = 0
        while self.has_left_child(index):
            smaller_child_index = self.get_left_index(index)
            if self.has_right_child(index) and self.get_right_child(index) < self.get_left_child(index):
                smaller_child_index = self.get_right_index(index)
                print "right"
            if self.data[smaller_child_index] < self.data[index]:
                self.swap_elements(index, smaller_child_index)
                index = smaller_child_index
                print index, self.data[index]
            else:
                break
                
        
    
    def get_parent_index(self, index):
        return (index - 1) / 2
    
    def get_parent(self, index):
        return self.data[self.get_parent_index(index)]
    
    def get_left_index(self, parent_index):
        return 2 * parent_index + 1
    
    def get_left_child(self, index):
        return self.data[self.get_left_index(index)]
    
    def get_right_index(self, parent_index):
        return 2 * parent_index + 2
    
    def get_right_child(self, index):
        return self.data[self.get_right_index(index)]
    
    def has_parent(self, index):
        return self.get_parent_index(index) >= 0
    
    def has_left_child(self, index):
        return self.get_left_index(index) < self.size
    
    def has_right_child(self, index):
        return self.get_right_index(index) < self.size
    
    def swap_elements(self, index1, index2):        
        self.data[index1], self.data[index2] = self.data[index2], self.data[index1]

    
    
minHeap = MinHeap()
minHeap.insert(2)
minHeap.insert(21)
minHeap.insert(34)
minHeap.insert(5)
minHeap.insert(9)
minHeap.insert(1)
minHeap.remove()
minHeap.remove()
print minHeap

