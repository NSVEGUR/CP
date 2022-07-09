def obviousSubStr(s, t):
	words = t.split()
	count = 0
	for word in words:
		for i in range(len(word)-len(s)+1):
			if(s == word[i:i+len(s)]):
				count+=1
	return count

def order(a):
	if(ord(a)>=97):
		return ord(a) - 96
	return ord(a) - 64

def hash(str):
	count = 0
	index = len(str) - 1
	for i in str:
		count += order(i) * (52**index)
		index -= 1
	return count

def karpRabin(s, t):
	count = 0
	subStr = hash(s)
	for i in range(len(t) - len(s) + 1):
		tempStr = hash(t[i:i+len(s)])
		if(subStr == tempStr):
			if(s == t[i:i+len(s)]):
				count+=1
	return count

t = input("Enter the sentence: ")
s = input("Enter the substring to fetch: ")
print("Count of substring in given sentence is : ", obviousSubStr(s, t))
print("Count of substring in given sentence is : ", karpRabin(s, t))