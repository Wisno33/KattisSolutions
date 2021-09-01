//I've Been Everywhere, Man https://open.kattis.com/problems/everywhere

#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t_cases, n_cities, distinct_cities;

	cin >> t_cases;

	string city;

	unordered_set<string> cities;

	int  t = 0;
	for(; t < t_cases; t++)
	{
		cin >> n_cities;
		distinct_cities = 0;

		for(int n = 0; n < n_cities; n++)
		{
			cin >> city;

			if(cities.find(city) == cities.end())
			{
				cities.insert(city);
				distinct_cities ++;
			}
		}

		cout << distinct_cities << endl;
	}

	return 0;
}