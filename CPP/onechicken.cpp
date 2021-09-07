//One Chicken Per Person! https://open.kattis.com/problems/onechicken

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	string p = "";

	n = m-n;

	if(n == 1)
		p = "Dr. Chaz will have " + to_string(n) + " piece of chicken left over!";
	else if(n > 1)
		p = "Dr. Chaz will have " + to_string(n) + " pieces of chicken left over!";
	else if(n == - 1)
		p = "Dr. Chaz needs " + to_string(abs(n)) + " more piece of chicken!";
	else
		p = "Dr. Chaz needs " + to_string(abs(n)) + " more pieces of chicken!";


	cout << p;

	return 0;
}