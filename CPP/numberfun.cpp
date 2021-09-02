//Number Fun https://open.kattis.com/problems/numberfun

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n_cases, a, b, c;

	cin >> n_cases;

	int n = 0;
	for(; n < n_cases; n++)
	{
		cin >> a >> b >> c;

		if(a + b == c)
		{
			cout << "Possible" << endl;
			continue;
		}
		else if(a - b == c || b - a == c)
		{
			cout << "Possible" << endl;
			continue;
		}
		else if (a * b  == c)
		{
			cout << "Possible" << endl;
			continue;
		}
		else if ((a / b == c && a % b == 0) || (b / a == c &&  b % a == 0))
		{
			cout << "Possible" << endl;
			continue;
		}
		else
		{
			cout << "Impossible" << endl;
		}

	}

	return 0;
}