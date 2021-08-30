//Death Knight Hero https://open.kattis.com/problems/deathknight

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n_battles = 0;

	cin >> n_battles;

	string attacks;

	int battles_won = 0;

	int n = 0;
	for(; n < n_battles; n++)
	{

		cin >> attacks;

		if (attacks.find("CD") == string::npos)
		{
			battles_won++;
		}
	}

	cout << battles_won;

	return 0;
}