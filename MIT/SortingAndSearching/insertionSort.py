def insertionSort(list1):
	n = len(list1)
	if(n == 1):
		return
	else:
		for i in range(1, n):
			if(list1[i] >= list1[i-1]):
				continue
			else:
				for j in range(i):
					if(list1[i-j]<list1[i-j-1]):
						list1[i-j], list1[i-j-1] = list1[i-j-1], list1[i-j]
					else:
						break
	return list1



n = int(input("Enter the size of the list: "))
list1 = []
for i in range(n):
	list1.append(int(input(f'Enter the element {i+1} : ')))
print("List after insertion sorting : ", insertionSort(list1))