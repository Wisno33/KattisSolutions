//Moscow Dream https://open.kattis.com/problems/moscowdream

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a,b,c,n;

	cin >> a >> b >> c >> n;

	if(a > 0 && b > 0 && c > 0 && a+b+c >= n && n >= 3)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}