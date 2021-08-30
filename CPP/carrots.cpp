//Solving for Carrots https://open.kattis.com/problems/carrots

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n_contestants, p_questions;

	cin >> n_contestants >> p_questions;

	string huffle_puff;

	int n = 0;
	for(; n < n_contestants; n++)
	{
		cin >> huffle_puff;
	}

	cout << p_questions;

	return 0;
}



