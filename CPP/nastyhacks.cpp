//Nasty Hacks https://open.kattis.com/problems/nastyhacks

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n_cases, r, e, c, ec;

	cin >> n_cases;

	int n = 0;
	for(; n < n_cases; n++)
	{
		cin >> r >> e >> c;

		ec = e - c;

		if(ec > r)
		{
			cout << "advertise" << endl;
		}
		else if(ec < r)
		{
			cout << "do not advertise" << endl;
		}
		else
		{
			cout << "does not matter" << endl;
		}
	}

	return 0;
}