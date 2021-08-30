#Matrix Inverse https://open.kattis.com/problems/matrix

from sys import stdin

matrixLines = []
matrixInverseLines = []

for line in stdin:

	x = line.strip("\n")

	if(x == ""):
		continue

	else:
		matrixLines.append(x)



	if(len(matrixLines) == 2):

		linea = matrixLines[0].split(" ")
		lineb = matrixLines[1].split(" ")

		a = int(linea[0])
		b = int(linea[1])

		c = int(lineb[0])
		d = int(lineb[1])

		#print(linea)
		#print(lineb)


		det = a*d - b*c


		row1 = str(int(d/det))+" "+str(int(-1*(b/det)))
		row2 = str(int(-1*(c/det)))+" "+str(int(a/det))


		matrixInverseLines.append(row1)
		matrixInverseLines.append(row2)
		matrixLines = []

count = 1
x = 0

for line in matrixInverseLines:

	if(x % 2 == 0):
		print("Case %d:" % count)
		print(line)
		x += 1
	else:
		print(line)
		count += 1
		x += 1