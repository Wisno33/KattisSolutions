//Grass Seed Inc. https://open.kattis.com/problems/grassseed

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double cost, n_lawns;

	cin >> cost;
	cin >> n_lawns;

	double l, w, total_area = 0.0;

	int n = 0;
	for(; n < n_lawns; n++)
	{
		cin >> l >> w;

		total_area += l * w;
	}

	cout << fixed << setprecision(7) << cost * total_area;

	return 0;
}