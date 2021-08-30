//Synchronizing Lists https://open.kattis.com/problems/synchronizinglists

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printArr(std::vector<int> arr);
void sync (std::vector<int> arr1, std::vector<int> arr2);
void getArrs();

void printArr(std::vector<int> arr)
{
	for (int x = 0; x < arr.size(); x++)
		cout << arr[x] << '\n';
	cout << '\n';
}

void sync(std::vector<int> arr1, std::vector<int> arr2)
{
	std::vector<int> arr1_temp;

	for(int i = 0; i < arr1.size(); i++)
		arr1_temp.push_back(arr1[i]);
		
	sort(arr1_temp.begin(), arr1_temp.end());
	sort(arr2.begin(), arr2.end());

	std::vector<int> arr2_sync;

	for(int m = 0; m < arr1.size(); m++)
	{
		std::vector<int>::iterator index = find(arr1_temp.begin(), arr1_temp.end(), arr1[m]);
		arr2_sync.push_back(arr2[index- arr1_temp.begin()]);
	}

	printArr(arr2_sync);
}

void getArrs()
{
	std::vector<std::vector<int> > arrs;

	while(1)
	{
		int size;

		cin >> size;

		if(size == 0)  break;

		std::vector<int> arr1;
		std::vector<int> arr2;

		int temp;

		for (int x = 0; x < size; x++)
		{
			cin >> temp;
			arr1.push_back(temp);
		}

		arr1.shrink_to_fit();

		for(int y = 0; y < size; y++)
		{
			cin >> temp;
			arr2.push_back(temp);
		}

		arr2.shrink_to_fit();

		arrs.push_back(arr1);
		arrs.push_back(arr2);
	}

	arrs.shrink_to_fit();

	for(int z = 0 ; z < arrs.size()/2; z++)
	{
		sync(arrs[z*2], arrs[z*2+1]);
	}
}

int main()
{
	getArrs();

	return 0;
}