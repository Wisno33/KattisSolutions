// Quick Estimates https://open.kattis.com/problems/quickestimate

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	string est;

	cin >> n;

	int j = 0;
	for(; j < n; j++)
	{
		cin >> est;

		cout << est.length() << endl; 
	}

	return 0;
}