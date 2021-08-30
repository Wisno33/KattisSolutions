//Stopwatch https://open.kattis.com/problems/stopwatch

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int time = 0;

	int run_time = 0;

	int n_clicks = 0;

	bool is_running = false;

	int previous_time_click = 0;

	cin >> n_clicks;

	int n = 0;
	for(; n < n_clicks; n++)
	{
		previous_time_click = time;

		is_running = is_running ? false : true;

		cin >> time;

		if (!is_running)
		{
			run_time += time - previous_time_click;
		}

	}

	if (is_running)
	{
		cout << "still running";

	}
	else
	{
		cout << run_time;
	}

	return 0;
}