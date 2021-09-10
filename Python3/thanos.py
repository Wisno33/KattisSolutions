#Thanos https://open.kattis.com/problems/thanos

t = int(input())

for n in range(t):

	line = input()

	p, r, f = map(int, line.split(" "))

	years_sustainable = 0

	while( p <= f):

		p *= r
		years_sustainable += 1

	print(years_sustainable)