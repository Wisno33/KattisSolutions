//Dice Cup https://open.kattis.com/problems/dicecup

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int d1, d2;

	vector<int> sums;
	map<int , double> probs;

	cin >> d1 >> d2;

	for(int n = 1; n <= d1; n++)
	{
		for(int m = 1; m <= d2; m++)
		{
			int sum = n+m;
			double prob = (1.0/d1) * (1.0/d2);

			if(probs.find(sum) == probs.end())
			{
				if(find(sums.begin(), sums.end(), sum) == sums.end())
					sums.push_back(sum);

				probs.insert(make_pair(sum , prob));
			}
			else
			{
				probs[sum] = probs[sum] + prob;
			}
		}
	}

	vector<int> most_likely_sums;

	double max_prob = 0.0;

	for(int e: sums)
	{

		double prob = probs[e];

		if (prob == max_prob)
		{
			most_likely_sums.push_back(e);
		}
		else if(prob > max_prob)
		{
			most_likely_sums.clear();
			most_likely_sums.push_back(e);
			max_prob = prob;
		}
	}

	sort(most_likely_sums.begin(), most_likely_sums.end());

	for(int e: most_likely_sums)
	{
		cout << e << endl;
	}

	return 0;
}