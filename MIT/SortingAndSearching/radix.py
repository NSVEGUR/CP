def countingSort(arr, expo):
	n = len(arr)
	output = [0] * n
	count = [0] * 10

	for a in arr:
		index = a // expo
		count[index % 10] += 1
	
	for i in range(1,10):
		count[i] += count[i-1]

	i  = n - 1
	while i >= 0:
		index = arr[i] // expo
		output[count[index % 10] - 1] = arr[i]
		count[index % 10] -= 1
		i -= 1

	for i in range(len(output)):
		arr[i] = output[i]

def radixSort(arr):
	maxi = max(arr)
	expo = 1
	while maxi / expo > 1:
		countingSort(arr, expo)
		expo *= 10
	return arr

list1 = []
for i in range(int(input("Enter the size of the array: "))):
	list1.append(int(input(f'Enter the element {i+1} : ')))
print("List before sorting: ", list1)
print("List after sorting: ", radixSort(list1))