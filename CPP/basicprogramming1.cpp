//Basic Programming 1 https://open.kattis.com/problems/basicprogramming1

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n, t, temp;
	vector<long> a;

	cin >> n >> t;

	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		a.push_back(temp);
	}

	switch(t)
	{
		case 1:
		{
			cout << 7;
			break;
		}

		case 2:
		{
			if(a[0] > a[1])
				cout << "Bigger";
			else if (a[0] < a[1])
				cout << "Smaller";
			else
				cout << "Equal";

			break;
		}

		case 3:
		{

			vector<long> med_arr;

			med_arr.push_back(a[0]);
			med_arr.push_back(a[1]);
			med_arr.push_back(a[2]);

			sort(med_arr.begin(), med_arr.end());

			cout << med_arr[1];

			break;
		}

		case 4:
		{		

			long sum = 0;

			for(long e: a)
			{
				sum += e;
			}

			cout << sum;


			break;
		}

		case 5:
		{

			long sum = 0;

			for(long e: a)
			{
				if(e % 2 == 0)
					sum += e;
			}

			cout << sum;

			break;
		}

		case 6:
		{

			vector<char> ints_as_chars;
			string out = "";

			for(long e: a)
			{
				out.push_back((e%26) + 'a');
			}

			cout << out;

			break;
		}

		case 7:
		{

			long i = 0;
			vector<bool> visted(n, false);

			while(true)
			{
				i = a[i];

				if(i < n - 1)
				{
					if(visted[i])
					{
						cout << "Cyclic";
						break;
					}

					visted[i] = true;
				}

				else if (i == n-1)
				{
					cout << "Done";
					break;
				}

				else if(i >= n || i < 0)
				{
					cout << "Out";
					break;
				}
			}		
			
			break;
		}
	}


	return 0;
}