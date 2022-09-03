"""Name : Simran Mehta
Section : R
Roll Number : 65"""


file = open('file3.txt','w')
str = input()
file.write(str)
file.close()
file = open('file3.txt','r')
file.seek(0)
data = file.read()
print(data)
file.close()
'''Input : Graphic Era Hill University
   Output : Graphic Era Hill University'''