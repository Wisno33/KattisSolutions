//No Duplicates https://open.kattis.com/problems/nodup

#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unordered_set<string> words;

	string word;

	while(cin >> word)
	{
		if(words.find(word) == words.end())
		{
			words.insert(word);
		}
		else
		{
			cout << "no";
			return 0;
		}
	}

	cout << "yes";

	return 0;
}