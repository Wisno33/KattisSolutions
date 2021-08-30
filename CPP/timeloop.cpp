//Stuck In A Time Loop https://open.kattis.com/problems/timeloop

#include <bits/stdc++.h>


using namespace std;

int main(int argc, char const *argv[])
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n_lines = 0;

	cin >> n_lines;

	int n = 1;
	for(; n <= n_lines; n++)
	{
		cout << n << " Abracadabra\n";
	}

	return 0;
}