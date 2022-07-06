def maxHeapify(list1, i):
	n = len(list1)
	largest = i
	left = (i+1)*2-1
	right = (i+1)*2
	if(left < n and list1[left] > list1[largest]):
		largest = left
	if(right < n and list1[right] > list1[largest]):
		largest = right
	if(largest!=i):
		list1[i], list1[largest] = list1[largest], list1[i]
		maxHeapify(list1, largest)
	return list1


list1 = []
for i in range(int(input("Enter the size of the list: "))):
	list1.append(int(input(f'Enter the element {i+1} : ')))
print("List before max heapify: ", list1)
print("List after max heapify: ", maxHeapify(list1, int(input("Enter the index to max heapify: "))))

