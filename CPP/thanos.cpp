//Thanos https://open.kattis.com/problems/thanos

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;

	cin >> t;

	long p, r, f;

	int years_sustainable = 0;

	int n = 0;
	for(; n < t; n++)
	{
		cin >> p >> r >> f;
		years_sustainable = 0;

		while(f - p >= 0)
		{
			p *= r;
			years_sustainable ++;
		}

		cout << years_sustainable << endl;
	}

	return 0;
}