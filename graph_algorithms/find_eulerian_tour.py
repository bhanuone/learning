# your code goes here
inp = [(0, 1), (1, 5), (1, 7), (4, 5),
(4, 8), (1, 6), (3, 7), (5, 9),
(2, 4), (0, 4), (2, 5), (3, 6), (8, 9)]
# inp = [(1, 2), (2, 3), (3, 1)]
def get_common_node(tour, graph):
    for node in tour:
        for edge in graph:
            if node in edge:
                return node
    return None

def unvisited_edge_index(node, graph):
    for i in range(len(graph)):
        if node in graph[i]:
            return i

def find_eulerian_tour(graph):    
    start = graph[0][0]
    tour = [start]
    while True:
        start = get_common_node(tour, graph)
        current = start
        subtour = [start]        
        while True:
            edge_i = unvisited_edge_index(current, graph)
            unvisited_edge = graph.pop(edge_i)
            if unvisited_edge[0] == current:
                subtour.append(unvisited_edge[1])
                current = unvisited_edge[1]
            else:
                subtour.append(unvisited_edge[0])
                current = unvisited_edge[0]
            if current == start:
                break
        sti = tour.index(subtour[0])
        tour = tour[:sti] + subtour + tour[sti+1:]
        if len(graph) == 0:
            break
    return tour

print find_eulerian_tour(inp)