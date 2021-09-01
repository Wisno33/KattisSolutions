//Jack-O'-Lantern Juxtaposition https://open.kattis.com/problems/jackolanternjuxtaposition

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int combos = 1, n;

	while(cin >> n)
	{
		combos *= n;
	}

	cout << combos;


	return 0;
}