// Lost Lineup https://open.kattis.com/problems/lostlineup

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, speration;

	cin >> n;

	int line[n];

	line[0] = 1;

	int i = 2;
	for(; i <= n; i++)
	{
		cin >> speration;

		line[1+speration] = i;
	}

	i = 0;
	for(; i < n; i++)
	{
		cout << line[i] << " ";
	}

	return 0;
}