//Echo Echo Echo https://open.kattis.com/problems/echoechoecho

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string word = "";

	cin >> word;

	word = word + " " + word + " " + word;

	cout << word;


	return 0;
}