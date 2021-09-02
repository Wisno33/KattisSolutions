//Chanukah Challenge https://open.kattis.com/problems/chanukah

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n_cases, toss, days;

	cin >> n_cases;

	int n = 0;
	for(; n < n_cases; n++)
	{
		cin >> toss >> days;

		int sum = 0;

		for(int j = 1; j <= days; j++)
		{
			sum += j+1;
		}

		cout << n+1 << " " << sum << endl;
	}


	return 0;
}