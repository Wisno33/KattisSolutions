# Left Beehind https://open.kattis.com/problems/leftbeehind

while (True):

	sweet, sour = map(int, input().split())

	if sweet != 0 or sour != 0:

		if sweet + sour == 13:
			print('Never speak again.')
		elif sweet > sour:
			print('To the convention.')
		elif sweet < sour:
			print('Left beehind.')
		else:
			print('Undecided.')
	else:
		break