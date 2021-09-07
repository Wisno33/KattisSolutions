//Alphabet Spam https://open.kattis.com/problems/alphabetspam

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	float w = 0.0, l = 0.0, u = 0.0, s = 0.0;

	string input;

	cin >> input;

	int n = 0, input_len = input.length();
	for(; n < input_len; n++)
	{
		if(input[n] == '_')
			w++;
		else if (input[n] >= 97 && input[n] <= 122)
			l++;
		else if (input[n] >= 65 && input[n] <= 90)
			u++;
		else
			s++;
	}

	cout << fixed	 << setprecision(7) << w/input_len << endl << l/input_len << endl << u/input_len << endl << s/input_len << endl;

	return 0;
}