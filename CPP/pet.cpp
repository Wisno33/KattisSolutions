//Pet https://open.kattis.com/problems/pet

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int max = 0;
	int cur_score = 0;
	int top_contestant = -1;

	int g1, g2, g3, g4 = 0;

	int n = 0;
	for(; n < 5; n++)
	{
		cin >> g1 >> g2 >> g3 >> g4;

		cur_score = g1 + g2 + g3 +g4;

		if(cur_score > max)
		{
			max = cur_score;
			top_contestant = n+1;
		}
	}

	cout << top_contestant << " " << max;

	return 0;
}