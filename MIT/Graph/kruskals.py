# Kruskals algorithm to find minimum spanning tree

class Graph:
	def __init__(self, vertices):
		self.vertices = vertices
		self.graph = []

	def addEdge(self, u, v, w):
		return self.graph.append([u, v, w])

	#finding its parent by path compression technique
	def find(self, i, parent):
		if parent[i] == i:
			return i
		return self.find(parent[i], parent)

	#making union based on rank
	def union(self, parent, rank, x, y):
		xRoot = self.find(x, parent)
		yRoot = self.find(y, parent)

		if rank[xRoot] > rank[yRoot]:
			parent[yRoot] = xRoot
		elif rank[yRoot] > rank[xRoot]:
			parent[xRoot] = yRoot
		else:
			parent[xRoot] = yRoot
			rank[yRoot] += 1

	def printMST(self, result):
			cost = 0
			for u, v, w in result:
				print(u, "--", v, " = ", w)
				cost += w
			print("Cost to perform mst: ", cost)


	def kruskalsMST(self):
		#sort the graph based on edge weight
		self.graph = sorted(self.graph, key=lambda x: x[2])

		parent = [x for x in range(self.vertices)]
		rank = [0 for x in range(self.vertices)]
		result = []
		r = 0
		i = 0

		while r < self.vertices - 1:
			u, v, w = self.graph[i]
			i += 1
			x = self.find(u, parent)
			y = self.find(v, parent)
			#if its equal it will form a cycle
			if x != y:
				result.append([u, v, w])
				r += 1
				self.union(parent, rank, x, y)
		self.printMST(result)

g = Graph(8)
g.addEdge(0, 1, 1)
g.addEdge(0, 2, 7)
g.addEdge(1, 3, 5)
g.addEdge(1, 4, 6)
g.addEdge(3, 2, 2)
g.addEdge(4, 6, 9)
g.addEdge(4, 5, 3)
g.addEdge(5, 7, 8)
g.addEdge(6, 7, 4)
  
# Function call
g.kruskalsMST()
