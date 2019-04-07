class Node:
  """A node of a binary tree"""
  def __init__(self, data):
    self.data = data
    self.left = None
    self.right = None
    
class BST:
  """A Binary Search Tree"""
  def __init__(self):
    self.root = None
    
  def insert(self, data):
    if self.root == None:
      self.root = Node(data)
      return None
    current = self.root
    while True:            
      if data <= current.data:
        if current.left == None:
          current.left = Node(data)
          break
        else:
          current = current.left
      else:
        if current.right == None:
          current.right = Node(data)
          break
        else:
          current = current.right    
  
  def search(self, data):        
    node = self.root
    while True:
      if not node: break
      if node.data == data:
        return True
      elif data < node.data:
        node = node.left
      else:
        node = node.right
    return False
          
  
bst = BST()
bst.insert(15)
bst.insert(10)
bst.insert(20)
assert bst.root.data, 15
assert bst.root.left.data, 10
assert bst.root.right.data, 20

assert bst.search(201) == False
assert bst.search(10) == True


  