//Sort Two Numbers https://open.kattis.com/problems/sorttwonumbers

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b = 0;

	cin >> a >> b;

	cout << min(a,b) << " " << max(a,b);

	return 0;
}