//Electrical Outlets https://open.kattis.com/problems/electricaloutlets

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n_cases, k_strips, total_plugs = 0, plugs_avail;
	
	cin >> n_cases;

	int n = 0;
	for(; n < n_cases; n++)
	{
		total_plugs = 0;

		cin >> k_strips;

		for(int k = 1; k < k_strips; k++)
		{
			cin >> plugs_avail;

			total_plugs += plugs_avail -1;
		}

		cin >> plugs_avail;

		total_plugs += plugs_avail;

		cout << total_plugs << endl;
	}

	return 0;
}