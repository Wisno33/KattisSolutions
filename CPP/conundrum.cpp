//Cryptographer's Conundrum https://open.kattis.com/problems/conundrum

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int days = 0;

	string cipher_text;

	cin >> cipher_text;

	for(int n = 0; n < cipher_text.length(); n++)
	{
		if(n % 3 == 0 && cipher_text[n] != 'P')
		{
			days ++;
		}
		else if(n % 3 == 1 && cipher_text[n] != 'E')
		{
			days ++;
		}
		else if(n % 3 == 2 && cipher_text[n] != 'R')
		{
			days ++;
		}
	}

	cout << days;

	return 0;
}