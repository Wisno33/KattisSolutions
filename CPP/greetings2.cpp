//Greetings! https://open.kattis.com/problems/greetings2

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string greeting;

	cin >> greeting;

	int n_e = (greeting.length() - 2) * 2;

	string response = "h";

	int n = 0;
	for(; n < n_e; n++)
	{
		response += "e";
	}

	response += "y";

	cout << response;

	return 0;
}