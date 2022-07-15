import sys

def multiplicationCost(d):
	n = len(d) - 1
	cost = [[0 for column in range(n)] for row in range(n)]
	s = [[0 for column in range(n)] for row in range(n)]
	for L in range(1, n):
		for i in range(0, n-L):
			j = i+L
			min = sys.maxsize
			for k in range(i, j):
				q = cost[i][k] + cost[k+1][j] + d[i-1]*d[j]*d[k]
				if q < min:
					min = q
					s[i][j] = k
			cost[i][j] = min
	return (cost[0][n-1], s)


dimensions = []
for i in range(int(input("Enter the number of dimensions: "))):
	dimensions.append(int(input(f'Enter the {i+1}th dimension: ')))
print("cost and parenthesis: ", multiplicationCost(dimensions))
