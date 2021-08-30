//Tarifa https://open.kattis.com/problems/tarifa

#include <bits/stdc++.h>


using namespace std;

int main()
{

	int megabytes_allocated = 0;
	int n_months = 0;
	int megabytes_remaining = 0;
	int megabytes_spent = 0;

	cin >> megabytes_allocated;
	cin >> n_months;

	int n = 0;
	for(; n < n_months; n++)
	{
		megabytes_remaining = megabytes_remaining + megabytes_allocated;

		cin >> megabytes_spent;

		megabytes_remaining = megabytes_remaining - megabytes_spent;
	}

	megabytes_remaining += megabytes_allocated;


	cout << megabytes_remaining;

	return 0;
}