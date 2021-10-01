// Mia https://open.kattis.com/problems/mia

#include <bits/stdc++.h>

using namespace std;

int roll_val(int a, int b)
{
	if(a == 1 && b == 2)
		return 1000;

	if(a == b)
		return a * 100;

	string s = to_string(b) + to_string(a);
	int c = stoi(s);
	return c;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int s0, s1, r0, r1;

	while(cin >> s0 >> s1 >> r0 >> r1)
	{
		if(s0 == 0 && s1 == 0)
			return 0;

		if(s0 > s1)
			swap(s0, s1);

		if(r0 > r1)
			swap(r0, r1);

		int s_roll = roll_val(s0, s1);
		int r_roll = roll_val(r0, r1);

		if(s_roll > r_roll)
			cout << "Player 1 wins.\n";

		else if(s_roll < r_roll)
			cout << "Player 2 wins.\n";

		else
			cout << "Tie.\n";

	}

	return 0;
}