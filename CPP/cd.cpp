#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, c, num_owned = 0;

	unordered_set<int> cds;

	while(cin >> n >> m)
	{

		if(n == 0 && m == 0)
			return 0;

		int k = 0;
		for(; k < n; k++)
		{
			cin >> c;
			cds.insert(c);
		}

		k = 0;
		for(; k < m; k++)
		{
			cin >> c;
			if(cds.find(c) != cds.end())
				num_owned++;
		}

		cout << num_owned << endl;

		cds.clear();
		num_owned = 0;
	}	


	return 0;
}