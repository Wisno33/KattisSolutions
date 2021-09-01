// ICPC Awards https://open.kattis.com/problems/icpcawards

#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n_teams;

	string uni_name, team_name;

	unordered_map<string, string> top_12_teams;
	vector<string> top_12_uni;

	cin >> n_teams;

	int n = 0;
	for(; n < n_teams; n++)
	{
		cin >> uni_name >> team_name;

		if(top_12_uni.size() < 12)
		{
			if(top_12_teams.find(uni_name) == top_12_teams.end())
			{
				top_12_teams.insert(make_pair(uni_name, team_name));
				top_12_uni.push_back(uni_name);
			}

			getline(cin, uni_name);
		}
	}

	cout << endl;

	for(string uni: top_12_uni)
	{
		cout << uni << " " << top_12_teams[uni] << endl;
	}



	return 0;
}
