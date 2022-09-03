"""Name : Simran Mehta
Section : R
Roll Number : 65"""
list = []
n = int(input())
for i in range(0,n):
	ele = input()
	list.append(ele)
numlist = []
sm=0
for i in list:
	if i.isnumeric() == True:
			numlist.append(int(i))
for i in numlist:
	sm+=int(i)
print(numlist)
print("Sum of list : ",sm)
'''Input: n = 5
   list = [1,'g',3,4,'h']
   Output: sum = 8'''