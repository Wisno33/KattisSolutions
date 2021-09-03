//Roaming Romans https://open.kattis.com/problems/romans

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double english_miles;

	cin >> english_miles;

	int paces = round(english_miles * 1000.0 * (5280.0 / 4854.0));

	cout << paces;

	return 0;
}