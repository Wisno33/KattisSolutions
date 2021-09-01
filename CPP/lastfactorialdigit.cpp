//Last Factorial Digit https://open.kattis.com/problems/lastfactorialdigit

#include <bits/stdc++.h>

using namespace std;



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n_cases;
	int f;
	int table[4] = {1, 2, 6, 4};
	int zero = 0;

	cin >> n_cases;

	int n = 0;
	for(; n < n_cases; n++)
	{
		cin >> f;

		if(f > 4)
		{
			cout << zero << endl;
		}
		else
		{
			cout << table[f-1] << endl;
		}
	}


	return 0;
}