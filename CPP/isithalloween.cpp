//IsItHalloween.com https://open.kattis.com/problems/isithalloween

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string month;
	int day;

	cin >> month >> day;

	if(month.compare("OCT") == 0 && day == 31)
		cout << "yup";
	else if(month.compare("DEC") == 0 && day == 25)
		cout << "yup";
	else
		cout << "nope";

	return 0;
}