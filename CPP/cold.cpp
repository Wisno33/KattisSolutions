//Cold-puter Science https://open.kattis.com/problems/cold

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n_temps, temp, temps_sub_zero = 0;

	cin >> n_temps;

	int n = 0;
	for(; n < n_temps; n++)
	{
		cin >> temp;

		if(temp < 0)
		{
			temps_sub_zero++;
		}
	}

	cout << temps_sub_zero;

	return 0;
}