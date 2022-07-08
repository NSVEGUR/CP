class Node:
	def __init__(self, data):
		self.data = data
		self.left = None
		self.right = None
		self.height = 1

class AVLTree:
	def __init__(self):
		self.root = None

	def search(self, root: Node, data):
		if(not root or root.data == data):
			return root
		if(data>root.data):
			return self.search(root.right, data)
		return self.search(root.left, data)

	def getHeight(self, root: Node):
		if not root:
			return 0
		return root.height
	
	def getBalance(self, root: Node):
		if not root:
			return 0
		return self.getHeight(root.left) - self.getHeight(root.right)

	def getMinValue(self, root: Node):
		current = root
		while not current.left:
			current = current.left
		return current
	
	def rotateLeft(self, z: Node):
		y = z.right
		subTree = y.left

		y.left = z
		z.right = subTree

		z.height = 1 + max(self.getHeight(z.left), self.getHeight(z.right))
		y.height = 1 + max(self.getHeight(y.left), self.getHeight(y.right))

		return y

	def rotateRight(self, z: Node):
		y = z.left
		subTree = y.right

		y.right = z
		z.left = subTree

		z.height = 1 + max(self.getHeight(z.left), self.getHeight(z.right))
		y.height = 1 + max(self.getHeight(y.left), self.getHeight(y.right))

		return y
	
	def insert(self, root: Node, data):
		if not root:
			return Node(data)
		if(root.data == data):
			return root
		elif(root.data < data):
			root.right = self.insert(root.right, data)
		else:
			root.left = self.insert(root.left, data)

		root.height = 1 + max(self.getHeight(root.left), self.getHeight(root.right))
		
		balance = self.getBalance(root)

		if(balance > 1 and data < root.left.data):
			return self.rotateRight(root)
		if(balance > 1 and data > root.left.data):
			root.left = self.leftRotate(root.left)
			return self.rotateRight(root)
		if(balance < -1 and data > root.right.data):
			return self.rotateLeft(root)
		if(balance < -1 and data < root.right.data):
			root.right = self.rotateRight(root.right)
			return self.rotateLeft(root)
		return root

	def delete(self, root: Node, data):
		if not root:
			return root
		if root.data < data:
			root.right = self.delete(root.right, data)
		elif root.data > data:
			root.left = self.delete(root.left, data)
		else:
			if root.left is None:
				temp = root.right
				root = None
				return temp
			elif root.right is None:
				temp = root.left
				root = None
				return temp
			temp = self.getMinValue(root.right)
			root.data = temp.data
			root.right = self.delete(root.right, temp.data)

		if not root:
			return root
		balance = self.getBalance(root)
		root.height = 1 + max(self.getHeight(root.left), self.getHeight(root.right))

		if(balance > 1 and self.getBalance(root.left) >= 0):
			return self.rotateRight(root)
		if(balance > 1 and self.getBalance(root.left) < 0):
			root.left = self.leftRotate(root.left)
			return self.rotateRight(root)
		if(balance < -1 and self.getBalance(root.right) <= 0):
			return self.rotateLeft(root)
		if(balance < -1 and self.getBalance(root.right) > 0):
			root.right = self.rotateRight(root.right)
			return self.rotateLeft(root)

		return root

	def inorder(self, root: Node):
		if root:
			self.inorder(root.left)
			print(root.data, end=" ")
			self.inorder(root.right)

	def preorder(self, root: Node):
		if root:
			print(root.data, end=" ")
			self.preorder(root.left)
			self.preorder(root.right)


myTree = AVLTree()
list1 = []
for i in range(int(input("Enter the size of nodes: "))):
	list1.append(int(input(f'Enter the element {i+1} : ')))
n = len(list1)
for i in range(n):
	myTree.root = myTree.insert(myTree.root, list1[i])
myTree.preorder(myTree.root)
print("\n")


