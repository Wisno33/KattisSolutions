//Faktor https://open.kattis.com/problems/faktor

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a_articles, impact;

	cin >> a_articles >> impact;

	cout << (a_articles * (impact - 1) + 1);

	return 0;
}