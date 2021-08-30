//Quality-Adjusted Life-Year https://open.kattis.com/problems/qaly

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n_periods = 0;

	cin >> n_periods;

	double qaly_periods[n_periods];

	double qol, period_len = 0.0;

	int n = 0;
	for(;n < n_periods; n++)
	{
		cin >> qol >> period_len;

		qaly_periods[n] = qol * period_len;
	}

	cout  << fixed << setprecision(3) << accumulate(qaly_periods, qaly_periods+n_periods, 0.0);

	return 0;
}