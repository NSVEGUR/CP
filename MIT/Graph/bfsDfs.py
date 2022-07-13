from collections import defaultdict

class Graph:
	def __init__(self):
		self.graph = defaultdict(list)
	
	def addEdge(self, u, v):
		self.graph[u].append(v)

	def BFS(self, s, visited):
		queue = []
		queue.append(s)
		visited.add(s)
		while queue:
			s = queue.pop(0)
			print(s, end=" ")
			for i in self.graph[s]:
				if i not in visited:
					queue.append(i)
					visited.add(i)

	def BFSAllNodes(self):
		visited = set()
		for vertex in list(self.graph):
			if vertex not in visited:
				self.BFS(vertex, visited)

	def DFS(self, v, visited):
		visited.add(v)
		print(v, end=" ")
		for neighbor in self.graph[v]:
			if neighbor not in visited:
				self.DFS(neighbor, visited)

	def DFSAllNodes(self):
		visited = set()
		for vertex in list(self.graph):
			if vertex not in visited:
				self.DFS(vertex, visited)


g = Graph()
g.addEdge(2, 2)
g.addEdge(2, 3)
g.addEdge(3, 4)
g.addEdge(3, 5)
g.addEdge(3, 7)
g.addEdge(5, 6)
g.addEdge(5, 8)
g.addEdge(6, 10)
g.addEdge(7, 6)
g.addEdge(8, 6)
g.addEdge(8, 10)
g.addEdge(10, 2)



print("BFS from node 2: \n")
g.BFS(2, set())
print("\n")
print("DFS from node 2: \n")
g.DFS(2, set())
print("\n")
