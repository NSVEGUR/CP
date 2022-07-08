def countingSort(list1):
	output = [0 for i in list1]
	count = [0 for i in range(102)]
	for i in list1:
		count[i] += 1
	for i in range(len(count)):
		count[i] += count[i-1]
	for i in range(len(output)):
		output[count[list1[i]] - 1] = list1[i]
		count[list1[i]] -= 1
	return output

list1 = []
for i in range(int(input("Enter the size of the array: "))):
	list1.append(int(input(f'Enter the element {i+1} : ')))
print("List before sorting: ", list1)
print("List after sorting: ", countingSort(list1))