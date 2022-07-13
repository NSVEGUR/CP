arr = list()
for i in range(int(input("Enter the number of arrays: "))):
	arr.append(int(input(f'Enter the size of the array {i+1} : ')))

def sortUptoTwo(start,arr):
	n = len(arr)
	for i in range(start, start + 2):
		for j in range(i, n):
			if arr[i] > arr[j]:
				arr[i], arr[j] = arr[j], arr[i]
	return arr

sums = list()


for i in range(len(arr) - 1):
	sortUptoTwo(i, arr)
	arr[i+1] = arr[i] + arr[i+1]
	sums.append(arr[i+1])

print(sums)
