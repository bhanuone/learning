class Node:
  def __init__(self, data):
    self.next = None
    self.prev = None
    self.data = data

# node = Node(1)
# print(node.data)
class Deque:
  def __init__(self):
    self.front = self.back = None

  def push_front(self, data):
    node = Node(data)
    if self.front == None:
      self.front = self.back = node
    else:
      self.front.prev = node 
      node.next = self.front
      self.front = node


  def push_back(self, data):
    node = Node(data)
    if self.back == None:
      self.front = self.back = node
    else:
      self.back.next = node
      node.prev = self.back
      self.back = node

  def pop_front(self):
    if self.front == None:
      return 'Empty'
    else:
      data = self.front.data
      if self.front.next == None:
        self.front = self.back = None
      else:
        self.front = self.front.next
        self.front.prev = None
      return data

  def pop_back(self):
    if self.back == None:
      return 'Empty'
    else:
      data = self.back.data
      if self.back.prev == None:
        self.back = self.front = None
      else:
        self.back = self.back.prev
        self.back.next = None
      return data

T = int(input())


dq = Deque()
for t in range(T):
  op = input().split(' ')
  if op[0] == 'push_back':
    dq.push_back(op[1])
  if op[0] == 'pop_back':
    print(dq.pop_back())
  if op[0] == 'push_front':
    dq.push_front(op[1])
  if op[0] == 'pop_front':
    print(dq.pop_front())

