// Statistics https://open.kattis.com/problems/statistics

#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int c = 0, n, num, mn, mx, range;

	string line;
	vector<int> nums;

	while(cin >> n)
	{
		c++;

		int j = 0;
		for(; j < n; j++)
		{
			cin >> num;

			nums.push_back(num);
		}

		mn = *min_element(nums.begin(), nums.end());
		mx = *max_element(nums.begin(), nums.end());
		range = mx - mn;

		cout << "Case " << c << ": " << mn << " " << mx << " " << range << endl;

		nums.clear();
 	}

	return 0;
}
