//Batter Up https://open.kattis.com/problems/batterup

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n_at_bats, bats, runs;

	float total_runs = 0.0;

	cin >> n_at_bats;

	bats = n_at_bats;

	int n = 0;
	for(; n < n_at_bats; n++)
	{
		cin >> runs;

		if(runs < 0)
		{
			bats -= 1;
		}
		else
		{
			total_runs += runs;
		}
	}

	cout << setprecision(4) << total_runs/bats;



	return 0;
}