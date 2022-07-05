def findPeak(list1, low, high, n):
	mid = (low+high)//2
	if((mid == 0 or list1[mid]>=list1[mid-1]) and (mid == n-1 or list1[mid]>=list1[mid+1])):
		return mid;
	elif (mid > 0 and list1[mid]<list1[mid-1]):
		return findPeak(list1, low, mid - 1, n)
	else:
		return findPeak(list1, mid + 1, high, n)

n = int(input("Enter the size of the list: "))
list1 = []
for i in range(n):
	list1.append(int(input("Enter element %d : "% (i+1))))
print("Peak Element is at index: ", findPeak(list1, 0, n-1, n))
