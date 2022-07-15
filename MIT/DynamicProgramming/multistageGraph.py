import sys

class Graph:
	def __init__(self, vertices, stages):
		self.vertices = vertices
		self.stages = stages
		self.graph = [[0 for row in range(vertices)] for column in range(vertices)]

	def shortestPath(self):
		cost = [0] * self.vertices
		d = [0] * self.vertices
		path = [0] * self.stages
		for i in range(self.vertices-1, -1, -1):
			min = sys.maxsize
			for j in range(i+1, self.vertices):
				if self.graph[i][j] > 0 and self.graph[i][j] + cost[j] < min:
					min = self.graph[i][j] + cost[j]
					d[i] = j
			cost[i] = min
			if i == self.vertices - 1:
				cost[i] = 0
		path[0] = 0
		for i in range(1, self.stages):
			path[i] = d[path[i-1]]
		print(path)

g = Graph(8, 4)
g.graph = [
	[0, 2, 1, 3, 0, 0, 0, 0],
	[2, 0, 0, 0, 2, 3, 0, 0],
	[1, 0, 0, 0, 6, 7, 0, 0],
	[3, 0, 0, 0, 6, 8, 9, 0],
	[0, 2, 6, 6, 0, 0, 0, 6],
	[0, 3, 7, 8, 0, 0, 0, 4],
	[0, 0, 0, 9, 0, 0, 0, 5],
	[0, 0, 0, 0, 6, 4, 5, 0]
]
g.shortestPath()