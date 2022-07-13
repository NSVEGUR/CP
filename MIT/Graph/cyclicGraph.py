from collections import defaultdict

class Graph:
	def __init__(self):
		self.graph = defaultdict(list)

class UnDirected(Graph):
	def addEdge(self, u, v):
		self.graph[u].append(v)
		self.graph[v].append(u)

	def isCyclicUtil(self, v, parent, visited):
		visited.add(v)
		for neighbor in self.graph[v]:
			if neighbor not in visited:
				if self.isCyclicUtil(neighbor, v, visited):
					return True
			elif neighbor != parent:
				return True
		return False

	def isCyclic(self):
		visited = set()
		for vertex in list(self.graph):
			if vertex not in visited:
				if self.isCyclicUtil(vertex, -1, visited):
					return True
		return False

class Directed(Graph):
	def addEdge(self, u, v):
		self.graph[u].append(v)

	def isCyclicUtil(self, v, visited, recStack):
		visited.add(v)
		recStack.add(v)
		for neighbor in self.graph[v]:
			if neighbor not in visited:
				if self.isCyclicUtil(neighbor, visited, recStack):
					return True
			elif neighbor in recStack:
				return True
		recStack.remove(v)
		return False
	
	def isCyclic(self):
		visited = set()
		recStack = set()
		for vertex in list(self.graph):
			if vertex not in visited:
				if self.isCyclicUtil(vertex, visited, recStack):
					return True
		return False

g = Directed()
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(1, 2)
g.addEdge(2, 0)
g.addEdge(2, 3)
g.addEdge(3, 3)
if g.isCyclic():
    print("Graph has a cycle")
else:
    print("Graph has no cycle")