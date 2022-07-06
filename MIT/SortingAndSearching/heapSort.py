def maxHeapify(list1, n, i):
	largest = i
	left = (i+1)*2 - 1
	right = (i+1)*2
	if(left<n and list1[left]>list1[largest]):
		largest = left
	if(right<n and list1[right]>list1[largest]):
		largest = right
	if(largest!=i):
		list1[i], list1[largest] = list1[largest], list1[i]
		maxHeapify(list1, n, largest)
	return list1


def heapSort(list1):
	n = len(list1)
	#Building Heap
	for i in range(n//2 - 1, -1, -1):
		maxHeapify(list1, n, i)
	for i in range(n-1, 0, -1):
		list1[0], list1[i] = list1[i], list1[0]
		maxHeapify(list1, i, 0)
	return list1


list1 = []
for i in range(int(input("Enter the size of the list: "))):
	list1.append(int(input(f'Enter the element {i+1} : ')))
print("List : ", list1)
print("Heap : ", heapSort(list1))