# Prims algorithm to find minimum spanning tree

import sys

class Graph:
	def __init__(self, vertices):
		self.vertices = vertices
		self.graph = [[0 for row in range(vertices)] for column in range(vertices)]

	def minKey(self, key, mstSet):
		min = sys.maxsize
		for v in range(self.vertices):
			if key[v] < min and mstSet[v] == False:
				min = key[v]
				min_index = v
		return min_index

	def printMST(self, parent):
		print("Edge \tWidth")
		for v in range(1, self.vertices):
			print(parent[v], "-", v, "\t", self.graph[v][parent[v]])

	def primsMST(self):
		key = [sys.maxsize] * self.vertices
		mstSet = [False] * self.vertices
		parent = [None] * self.vertices
		
		key[0] = 0
		parent[0] = -1

		for count in range(self.vertices):
			u = self.minKey(key, mstSet)
			mstSet[u] = True

			for v in range(self.vertices):
				if self.graph[u][v] > 0 and mstSet[v] == False and key[v] > self.graph[u][v]:
					key[v] = self.graph[u][v]
					parent[v] = u

		self.printMST(parent)



g = Graph(7)
g.graph = [
	[0, 28, 0, 0, 0, 10, 0],
	[28, 0, 16, 0, 0, 0, 14],
	[0, 16, 0, 12, 0, 0, 0],
	[0, 0, 12, 0, 22, 0, 18],
	[0, 0, 0, 22, 0, 25, 24],
	[10, 0, 0, 0, 25, 0, 0],
	[0, 14, 0, 18, 24, 0, 0]
]

g.primsMST()
