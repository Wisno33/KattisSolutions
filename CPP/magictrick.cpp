//Magic Trick https://open.kattis.com/problems/magictrick

#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unordered_set<char> letters;

	string str;

	cin >> str;

	for(char c: str)
	{
		if(letters.find(c) == letters.end())
		{
			letters.insert(c);
		}
		else
		{
			cout << "0";
			return 0;
		}
	}

	cout << "1";


	return 0;
}