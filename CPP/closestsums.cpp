//Closest Sums https://open.kattis.com/problems/closestsums

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n_ints;

	int case_num = 1;

	while(cin >> n_ints)
	{
		cout << "Case " << case_num << ":" << endl;

		vector<int> ints(n_ints, 0);

		int n = 0;
		for(; n < n_ints; n++)
		{
			cin >> ints[n];
		}

		int m_queries;

		cin >> m_queries;

		for(int j = 0; j < m_queries; j++)
		{
			int query;

			cin >> query;

			int closest = ints[0] + ints[1];

			for(int k = 0; k < n_ints; k++)
			{
				for(int l = k+1; l < n_ints; l++)
				{

					int sum = ints[k] + ints[l];

					if(abs(sum - query) < abs(closest - query))
					{
						closest = sum;
					}
				}
			}

			cout << "Closest sum to " << query << " is " << closest << "." << endl;

		}

		case_num ++;
	}

	return 0;
}