//Codforces https://open.kattis.com/problems/kodkraft

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n_contests, k_divisions;

	cin >> n_contests >> k_divisions;

	int current_div = 1;

	int schedule[n_contests];

	int n = 0;
	for(; n < n_contests; n++)
	{
		cin >> schedule[n];
	}

	int starting_index;

	for(int i = n_contests-1; i >= 0; i--)
	{
		if(schedule[i] == current_div)
		{
			starting_index = i;
			break;
		}
	}

	int contests_waited = 1;
	current_div++;
	int index = starting_index;

	while(current_div <= k_divisions)
	{
		index = (index + 1) % n_contests;

		if(schedule[index] == current_div)
		{
			contests_waited++;
			current_div++;
		}
		else
		{
			contests_waited++;
		}

	}

	cout << contests_waited;

	return 0;
}