//Boat Parts https://open.kattis.com/problems/boatparts

#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k_parts, n_lines, day_replaced = 0;

	cin >> k_parts >> n_lines;

	string part;
	unordered_set<string> parts;


	int n = 0;
	for(; n < n_lines; n++)
	{
		cin >> part;

		parts.insert(part);

		if(parts.size() == k_parts && day_replaced == 0)
		{
			day_replaced = n+1;
		}
	}

	if(day_replaced != 0)
	{
		cout << day_replaced;
	}
	else
	{
		cout << "paradox avoided";
	}


	return 0;
}