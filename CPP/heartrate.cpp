//Heart Rate https://open.kattis.com/problems/heartrate

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n_cases;

	double b,p, bps, bpm;

	cin >> n_cases;

	int n = 0;
	for(; n < n_cases; n++)
	{
		cin >> b >> p;

		bpm = (60*b)/p;

		bps = 60/p;

		cout << bpm - bps << " " << bpm << " " << bpm + bps << endl;
	}

	return 0;
}