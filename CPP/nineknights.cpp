// Nine Knights https://open.kattis.com/problems/nineknights 

#include <bits/stdc++.h>

using namespace std;

bool valid(const vector<vector<char> > &board)
{
	int count = 0;

	for(int i = 2; i< 7; i++)
	{
		for(int j = 2; j < 7; j++)
		{

			if(board[i][j] == 'k')
			{
				count++;

				if (board[i+2][j+1] == 'k')
				{
					return false;
				}

				if (board[i+2][j-1] == 'k')
				{
					return false;
				}

				if (board[i-2][j+1] == 'k')
				{
					return false;
				}

				if (board[i-2][j-1] == 'k')
				{
					return false;
				}

				if (board[i+1][j+2] == 'k')
				{
					return false;
				}

				if (board[i+1][j-2] == 'k')
				{
					return false;
				}

				if (board[i-1][j+2] == 'k')
				{
					return false;
				}

				if (board[i-1][j-2] == 'k')
				{
					return false;
				}
			}
		}
	}

	if(count != 9)
		return false;

	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<vector<char> > board;

	for(int i = 0; i < 9; i++)
	{
		vector<char> row(9, '.');

		if( i > 1 && i < 7)
		{
			for(int j = 2; j < 7; j++)
			{	
				cin >> row[j];
			}
		}

		board.push_back(row);
	}

	if(valid(board))
		cout << "valid";
	else
		cout << "invalid";

	return 0;
}