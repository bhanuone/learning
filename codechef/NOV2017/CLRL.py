class Node():
  """docstring for Node"""
  def __init__(self, data):
    self.data = data;
    self.left = None
    self.right = None
 
 
valid = True
def insert(root, data):
  global valid;
  if root == None:
    root = Node(data)
  elif data < root.data:
    root.left = insert(root.left, data)
    if root.right != None:
      valid = False    
  else:
    root.right = insert(root.right, data)
    if root.left != None:
      valid = False
  return root
 
T = int(raw_input())
for t in range(T):
  N, R = map(int, raw_input().split(' '))
  A = map(int, raw_input().split(' '))
  root = None
  for i in range(N):
    if valid != True:
      break
    root = insert(root, A[i])
  if valid:
    print "YES"
  else:
    print "NO"
  valid = True