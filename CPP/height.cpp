// Height Ordering https://open.kattis.com/problems/height

#include <bits/stdc++.h>

using namespace std;

int insertion_sort(vector<int> arr, int n)
{
	int steps = 0;

	int cur;

	for(int i = 1; i < n; i++)
	{
		cur = arr[i];

		int j = i -1;

		while(j >= 0 && arr[j] > cur)
		{

			arr[j+1] = arr[j];
			j--;
			steps++;

		}

		arr[j+1] = cur;
	}

	return steps;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int p, n;

	cin >> p;

	for(int i = 1; i <= p; i++)
	{
		cin >> n;

		vector<int> line(20);

		for(int j = 0; j < 20; j++)
		{
			cin >> line[j];
		}

		cout << n << " " << insertion_sort(line, line.size()) << endl;

		line.clear();
	}

	return 0;
}