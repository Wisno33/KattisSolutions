//Filip https://open.kattis.com/problems/filip

#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a,b;

	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	int a_prime = stoi(a);
	int b_prime = stoi(b);

	cout << max(a_prime, b_prime);

	return 0;
}