//Shattered Cake https://open.kattis.com/problems/shatteredcake

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int width, n_pieces, area_sum = 0;

	cin >> width;
	cin >> n_pieces;

	int n, l, w = 0;
	for(; n < n_pieces; n++)
	{
		cin >> l >> w;
		area_sum += l * w;
	}

	cout << area_sum/width;
	
	return 0;
}