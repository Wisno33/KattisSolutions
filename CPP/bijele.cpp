//Bijele https://open.kattis.com/problems/bijele

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int ck = 1, cq = 1, cr =2, cb = 2, ckn = 2, cp = 8;

	int k, q, r, b, kn, p;

	cin >> k >> q >> r >> b >> kn >> p;

	cout << ck - k << " " << cq - q << " " << cr - r << " " << cb - b << " " << ckn - kn << " " << cp - p << " ";

	return 0;
}