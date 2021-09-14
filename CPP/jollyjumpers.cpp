//Jolly Jumpers https://open.kattis.com/problems/jollyjumpers

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n, m;

	vector<long> sequence;

	while(cin >> n)
	{
		vector<bool> abs_diffs(n,false);
		abs_diffs[0] = true;

		for(int i = 0; i < n; i++)
		{
			cin >> m;
			sequence.push_back(m);
		}

		for(int j = 0; j < n-1; j++)
		{
			long abs_diff = abs(sequence[j] - sequence[j+1]);
			abs_diffs[abs_diff] = true;
		}


		if(find(abs_diffs.begin(), abs_diffs.end(), false) == abs_diffs.end())
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;

		sequence.clear();
	}

	return 0;
}