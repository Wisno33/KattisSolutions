//Bela https://open.kattis.com/problems/bela

#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n_hands, points = 0;

	char dom_suite;

	string card;

	unordered_map<char, int> card_val;
	card_val.insert(make_pair('A', 11));
	card_val.insert(make_pair('K', 4));
	card_val.insert(make_pair('Q', 3));
	card_val.insert(make_pair('J', 2));
	card_val.insert(make_pair('T', 10));
	card_val.insert(make_pair('9', 0));
	card_val.insert(make_pair('8', 0));
	card_val.insert(make_pair('7', 0));

	cin >> n_hands;
	n_hands *= 4;

	cin >> dom_suite;

	int n = 0;
	for(; n < n_hands; n++)
	{
		cin >> card;

		points += card_val[card[0]];

		if(card[1] == dom_suite)
		{
			if (card[0] == 'J')
			{	
				points += 18;
			}
			if (card[0] == '9')
			{
				points += 14;
			}
		}
	}

	cout << points;


	return 0;
}
