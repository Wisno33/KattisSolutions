//Rating Problems https://open.kattis.com/problems/ratingproblems

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n_judges, k_voted = 0;

	cin >> n_judges >> k_voted;

	int cast_votes[k_voted];

	int k = 0;
	for(; k < k_voted; k++)
	{
		cin >> cast_votes[k];
	}

	
	double max_score = (3.0*(n_judges - k_voted) + accumulate(cast_votes, cast_votes+k_voted, 0)) / n_judges;

	double min_score = (-3.0*(n_judges - k_voted) + accumulate(cast_votes, cast_votes+k_voted, 0)) / n_judges;

	cout << setprecision(6) << min_score << " " << max_score;

	return 0;
}