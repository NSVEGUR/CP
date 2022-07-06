def findMax(list1, n):
	print(list1[n])
	maxi = list1[n].index(max(list1[n]))
	return maxi

def findPeak(list1, low, high, row):
	i = (low+high)//2
	colMax = findMax(list1, i)
	if((i == 0 or list1[i-1][colMax] <= list1[i][colMax]) and (i == row - 1 or (list1[i][colMax]>=list1[i+1][colMax]))):
		return (i, colMax)
	elif(list1[i-1][colMax] > list1[i][colMax]):
		return findPeak(list1, low, i - 1, row)
	else:
		return findPeak(list1, i + 1, high, row)

print("Enter row and column of the list: ")
rows, cols = map(int, input().split())
list1 = [[0 for i in range(cols)] for j in range(rows)]
for i in range(rows):
	for j in range(cols):
		list1[i][j] = int(input(f'Enter element at row {i+1} & col {j+1} : '))
print("Peak of the given 2D array is at: ", findPeak(list1, 0, rows - 1, rows))
