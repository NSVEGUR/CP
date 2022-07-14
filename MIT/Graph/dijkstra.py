# Dijkstra algorithm to find single source shortest path to all the nodes
# similar to prims

import sys

class Graph:
	def __init__(self, vertices):
		self.vertices = vertices
		self.graph = [[0 for row in range(vertices)] for column in range(vertices)]

	def minDistance(self, distances, sptSet):
		min = sys.maxsize
		for v in range(self.vertices):
			if distances[v] < min and sptSet[v] == False:
				min = distances[v]
				min_index = v
		return min_index

	def printDistances(self, distances, src):
		print("Vertix \t Distance From Source ", src)
		for node in range(self.vertices):
			print(node, "\t", distances[node])


	def dijkstra(self, src):
		distances = [sys.maxsize] * self.vertices
		sptSet = [False] * self.vertices
		distances[src] = 0
		for count in range(self.vertices):
			u = self.minDistance(distances, sptSet)
			sptSet[u] = True
			for v in range(self.vertices):
				if self.graph[u][v] > 0 and sptSet[v] == False and distances[v] > (distances[u] + self.graph[u][v]):
					distances[v] = distances[u] + self.graph[u][v]
		self.printDistances(distances, src)


g = Graph(9)
g.graph = [[0, 4, 0, 0, 0, 0, 0, 8, 0],
        [4, 0, 8, 0, 0, 0, 0, 11, 0],
        [0, 8, 0, 7, 0, 4, 0, 0, 2],
        [0, 0, 7, 0, 9, 14, 0, 0, 0],
        [0, 0, 0, 9, 0, 10, 0, 0, 0],
        [0, 0, 4, 14, 10, 0, 2, 0, 0],
        [0, 0, 0, 0, 0, 2, 0, 1, 6],
        [8, 11, 0, 0, 0, 0, 1, 0, 7],
        [0, 0, 2, 0, 0, 0, 6, 7, 0]
        ];
 
g.dijkstra(0);