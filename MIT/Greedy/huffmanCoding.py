from collections import defaultdict


class Node:
	def __init__(self, symbol, frequency, left = None, right = None):
		self.symbol: str = symbol
		self.frequency: int = frequency
		self.left = left
		self.right = right
		self.huff = ''

def printNodes(node: Node, val=''):
	newValue = val + str(node.huff)
	if(node.left):
		printNodes(node.left, newValue)
	if(node.right):
		printNodes(node.right, newValue)
	if(not node.left and not node.right):
		print(f'{node.symbol}->{newValue}')


stri = input("Enter the string for huffman encoding: ")
nodeDict = defaultdict(lambda: 0)
nodes = list()


for s in stri:
	nodeDict[s] += 1

for val in list(nodeDict):
	nodes.append(Node(val, nodeDict[val]))


while len(nodes) > 1:
	nodes = sorted(nodes, key=lambda x: x.frequency)
	left = nodes[0]
	right = nodes[1]
	left.huff = 0
	right.huff = 1
	newNode = Node(left.symbol+right.symbol, left.frequency+right.frequency, left, right)
	nodes.remove(left)
	nodes.remove(right)
	nodes.append(newNode)


printNodes(nodes[0])

# bccabbddaeccbbaeddcc