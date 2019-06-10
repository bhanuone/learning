class SegTree:
    def __init__(self, n):
        self.n = n
        self.data = [0] * 2 * n
    
    def update_element(self, idx, elm):
        idx = self.n + idx
        self.data[idx] += elm
        # self.update_tree(idx)
        
    def update_tree(self, idx):
        while idx > 1:
            idx = idx // 2
            self.data[idx] = max(self.data[2 * idx], self.data[2 * idx + 1])


n, m = map(int, input().split())

tree = SegTree(n)
queries = []
for q in range(m):
    queries.append(map(int, input().split()))

print("Done reading input")
print("No of query", m)
count = 1
for q in queries:    
    print("Excuting query", count)
    a, b, k = q
    lcount = 1
    print(a, b) 
    for i in range(a - 1, b):
        print("Excuting lcount", lcount, count)   
        # tree.update_element(i, k)
        lcount += 1
    count += 1
print(tree.data[1])