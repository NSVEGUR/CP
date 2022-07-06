class Node:
	def __init__(self, data):
		self.data = data
		self.left = None
		self.right = None

class BST:
	def __init__(self):
		self.root = None
		return self.root

	def search(self, root: Node, data):
		if(root is None or root.data == data):
			return root
		if(data>root.data):
			return self.search(root.right, data)
		return self.search(root.left, data)

	def minValue(self, root: Node):
		current = root
		while(current.left is not None):
			current = current.left
		return current
	
	def insert(self, root: Node, data):
		if(root is None):
			return Node(data)
		else:
			if(root.data == data):
				return root
			elif(root.data < data):
				root.right = self.insert(root.right, data)
			else:
				root.left = self.insert(root.left, data)
		return root

	def deleteNode(self, root: Node, data):
		if(root is None):
			return root
		if(root.data < data):
			root.right = self.deleteNode(root.right, data)
		elif(root.data > data):
			root.left = self.deleteNode(root.left, data)
		else:
			if(root.left is None):
				temp = root.right
				root = None
				return temp
			elif(root.right is None):
				temp = root.left
				root = None
				return temp
			inorderSuccessor = self.minValue(root.right)
			root.data = inorderSuccessor.data
			root.right = self.deleteNode(root.right, inorderSuccessor.data)
		return root

	def inorder(self, root: Node):
		if(root):
			self.inorder(root.left)
			print(root.data, end=" ")
			self.inorder(root.right)

	def subtreeCount(self, root: Node):
		if(root is None):
			return 0
		if(root.left is None and root.right is None):
			return 1
		if(root.left is None):
			return 1 + self.subtreeCount(root.right)
		elif(root.right is None):
			return 1 + self.subtreeCount(root.left)
		return 1 + self.subtreeCount(root.left) + self.subtreeCount(root.right)

	def rank(self,root: Node, data):
		if(root is None):
			return 0
		if(root.data == data):
			return self.subtreeCount(root.left)
		elif(root.data < data):
			return 1 + self.subtreeCount(root.left) + self.rank(root.right, data)
		else:
			return self.rank(root.left, data)

bst = BST()
list1 = []
for i in range(int(input("Enter the size of nodes: "))):
	list1.append(int(input(f'Enter the element {i+1} : ')))
n = len(list1)
for i in range(n):
	bst.root = bst.insert(bst.root, list1[i])
bst.inorder(bst.root)
print("\n")
x = int(input("Enter the node to find the rank: "))
print(f'Rank of {x} is : ', bst.rank(bst.root, x))
