// A Different Problem https://open.kattis.com/problems/different

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long a,b;

	while(cin >> a)
	{
		cin >> b;

		cout << abs(a-b) << endl;

	}

	return 0;
}