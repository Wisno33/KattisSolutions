//Digits https://open.kattis.com/problems/digits

#include <bits/stdc++.h>


using namespace std;

int recurrence(int len, int count)
{
	if (len == 1)
		return count + 1;

	int nlen = 0, olen = len;

	for (; len; len /= 10, ++nlen);

	return recurrence(nlen, count + 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;

	while (cin >> input && input[0] != 'E')
	{
		if (input.length() == 1 && input[0] == '1')
			cout << "1" << endl;
		else
			cout << recurrence(input.length(), 1) << endl;
	}

	return 0;
}