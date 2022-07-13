from audioop import reverse


arr = list()
for i in range(int(input("Enter the number of jobs: "))):
	arr.append((int(input(f'Enter the profit of job {i+1} : ')), int(input(f'Enter the deadline of job {i+1} : '))))

arr.sort(reverse=True)

due = int(input("Enter the total due time: "))
jobs = [0] * due

for i in range(len(arr)):
	if arr[i][1] <= due:
		maxi = arr[i][1] - 1
	else:
		maxi = due - 1
	for j in range(maxi, -1, -1):
			if jobs[j] == 0:
				jobs[j] = arr[i][0]
				break

print(jobs)