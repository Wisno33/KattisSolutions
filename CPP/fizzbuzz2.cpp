//FizzBuzz https://open.kattis.com/problems/fizzbuzz2

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n_candidates, m_values;

	cin >> n_candidates >> m_values;

	vector<int> answers_correct(n_candidates, 0);
	string answer = "";

	int n = 0;
	for(; n < n_candidates; n++)
	{
		for(int m = 1; m <= m_values; m++)
		{
			string fb = "";

			if(m % 3 == 0)
			{
				fb = fb + "fizz";
			}

			if(m % 5 == 0)
			{
				fb = fb + "buzz";
			}

			if(fb.compare("") == 0)
			{
				fb = to_string(m);
			}

			cin >> answer;

			if(fb.compare(answer) == 0)
			{
				answers_correct[n]++;
			}
		}
	}

	int index_max = 0;

	int i = 0;
	for(;i < n_candidates; i++)
	{
		if(answers_correct[index_max] < answers_correct[i])
		{
			index_max = i;
		}
	}

	cout << index_max+1;

	return 0;
}