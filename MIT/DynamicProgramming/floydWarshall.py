INF = 99999

class Graph:
	def __init__(self, vertices):
		self.vertices = vertices
		self.graph = [[0 for row in range(vertices)] for column in range(vertices)]

	def shortestPathPairs(self):
		temp = self.graph
		for k in range(self.vertices):
			for i in range(self.vertices):
				for j in range(self.vertices):
					self.graph[i][j] = min(temp[i][j], temp[i][k] + temp[k][j])
			temp = self.graph
		print(temp)


g = Graph(4)
g.graph = [
	[0, 3, INF, 7],
	[8, 0, 2, INF],
	[5, INF, 0, 1],
	[2, INF, INF, 0]
]
g.shortestPathPairs()
		
