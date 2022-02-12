# Missing Numbers https://open.kattis.com/problems/missingnumbers

n = int(input())
correct = True

i = 1
for _ in range(0, n):
	num = int(input())

	if(i != num):
		print(i)
		i = num
		correct = False
	i+=1


if correct:
	print('good job')