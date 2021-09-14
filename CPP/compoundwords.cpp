//Compound Words https://open.kattis.com/problems/compoundwords

#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> words;
	string word;

	set<string> compound_words;

	while((cin >> ws).peek() != EOF)
	{
		cin >> word;
		words.push_back(word);
	}

	int n = words.size();

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i != j)
				compound_words.insert(words[i] + words[j]);
		}
	}

	for(auto e: compound_words)
	{
		cout << e << endl;
	}

	return 0;
}