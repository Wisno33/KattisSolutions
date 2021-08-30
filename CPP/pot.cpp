//Pot https://open.kattis.com/problems/pot

#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n_nums = 0;

	cin >> n_nums;

	string error_num;
	string base_num, pow_num;
	int num_str_len;
	int sum = 0;

	int n = 0;
	for(; n < n_nums; n++)
	{
		cin >> error_num;

		num_str_len = error_num.size();

		pow_num = error_num[num_str_len-1];

		base_num = error_num.substr(0, num_str_len-1);

		sum += pow(stoi(base_num), stoi(pow_num));
	}



	cout << sum;

	return 0;
}