//Planina https://open.kattis.com/problems/planina

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int i_iterations = 0;

	cin >> i_iterations;

	int points_per_side = 2;

	int i = 0;
	for(; i < i_iterations; i++)
	{
		points_per_side += points_per_side - 1;
	}

	cout << points_per_side * points_per_side;

	return 0;
}