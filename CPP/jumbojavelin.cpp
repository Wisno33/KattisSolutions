//Jumbo Javelin https://open.kattis.com/problems/jumbojavelin

#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n_cases = 0, length = 0, rod_len = 0;

	cin >> n_cases;

	int n = 0;
	for(; n < n_cases; n++)
	{
		cin >> rod_len;

		length += rod_len;
	}

	cout << length - n_cases + 1;

	return 0;
}