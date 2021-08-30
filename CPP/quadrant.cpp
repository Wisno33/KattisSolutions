//Quadrant Selection https://open.kattis.com/problems/quadrant

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x,y;

	cin >> x >> y;

	int xy = x*y;

	if(xy < 0)
	{
		cout << ((x < 0) ? 2 : 4);
		return 0;
	}

	else
	{
		cout << ((x > 0) ? 1 : 3);

		return 0;
	}


	return 0;
}