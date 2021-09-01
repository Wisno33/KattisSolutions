//Homework https://open.kattis.com/problems/heimavinna

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int total = 0;

	string questions, split_questions;

	cin >> questions;

	stringstream ss(questions); 

	while(getline(ss , split_questions,  ';'))
	{
		size_t index = split_questions.find("-");

		if(index != string::npos)
		{
			int end, begin;

			begin = stoi(split_questions.substr(0,index));
			end = stoi(split_questions.substr(index+1, split_questions.length()-index-1));

			total += end - begin + 1;
		}
		else
		{
			total += 1;
		}
	}

	cout << total;

	return 0;
}