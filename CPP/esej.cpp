// Esej https://open.kattis.com/problems/esej

#include <bits/stdc++.h>
#include <set>

using namespace std;

char rand_char()
{
	return (rand() % 26) + 97;
}

string gen_string()
{
	int chars = (rand() % 15) + 1;

	string s = "";

	for(int i = 0; i < chars; i++)
	{
		s += rand_char();
	}

	return s;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	set<string> used_words;

	vector<string> essay;

	int a,b;

	cin >> a >> b;

	int min_vocab = round(b/2.0);

	int num_words = 0;

	while((num_words < a || num_words < min_vocab) && num_words < b)
	{
		string word = gen_string();

		while(used_words.find(word) != used_words.end())
			word = gen_string();

		num_words++;
		used_words.insert(word);
		essay.push_back(word);	
	}	

	for(int i = 0; i < num_words; i++)
	{
		cout << essay[i] << " ";
	}

	return 0;
}