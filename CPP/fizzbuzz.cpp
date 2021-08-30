//FizzBuzz https://open.kattis.com/problems/fizzbuzz

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x_div, y_div, n_nums;

	cin >> x_div >> y_div >> n_nums;

	string output = "";

	int n = 1;
	for(; n <= n_nums; n++)
	{

		output = "";

		if(n % x_div == 0)
		{
			output = output + "Fizz";
		}

		if(n % y_div == 0)
		{
			output = output + "Buzz";
		}

		if(output.compare("") == 0)
		{
			output = to_string(n);
		}

		cout << output << endl;
	}

	return 0;
}