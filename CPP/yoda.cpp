//Yoda https://open.kattis.com/problems/yoda

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

std::vector<int> digitize(int num);
std::vector<int> pad(std::vector<int> v, int size);
int compare(int num1, int num2);
bool yoda(std::vector<int> v);
int numeritize(std::vector<int> v);
void printArr(std::vector<int> v);

int main()
{
	std::vector<int> num1_digits;
	std::vector<int> num2_digits;
	std::vector<int> num1_result;
	std::vector<int> num2_result;

	int num1;
	int num2;

	cin >> num1;
	cin >> num2;

	num1_digits = digitize(num1);
	num2_digits = digitize(num2);

	int digits;

	if(num1_digits.size() > num2_digits.size())
	{
		digits = num1_digits.size();
		num2_digits = pad(num2_digits, digits);
	}
	else
	{
		digits = num2_digits.size();
		num1_digits = pad(num1_digits, digits);
	}

	int comp_result;

	for(int i =0; i<digits; i++)
	{
		comp_result = compare(num1_digits[i], num2_digits[i]);

		if(comp_result == 1)
			num1_result.push_back(num1_digits[i]);
		else if(comp_result == 2)
			num2_result.push_back(num2_digits[i]);
		else{
			num1_result.push_back(num1_digits[i]);
			num2_result.push_back(num2_digits[i]);
		}
	}

	if(yoda(num1_result))
		cout << "YODA\n";
	else
		cout << numeritize(num1_result) << '\n';


	if(yoda(num2_result))
		cout << "YODA";
	else
		cout << numeritize(num2_result);


}

std::vector<int> digitize(int num)
{
	std::vector<int> v;
	int remaining = num;
	while(remaining >= 10)
	{
		v.insert(v.begin(),num % 10);
		remaining = num - v[0];
		num = num / 10;
	}

	return v;
}

std::vector<int> pad(std::vector<int> v, int digits)
{
	int padding = digits - v.size();

	for (int i = 0; i < padding; i++)
	{
		v.insert(v.begin(), 0);
	}

	return v;
}

int compare(int num1, int num2)
{
	if(num1 > num2)
		return 1;
	else if(num2 > num1)
		return 2;
	else 
		return 0;
}

bool yoda(std::vector<int> v)
{
	if(v.size() == 0)
		return true;
	return false;
}

int numeritize(std::vector<int> v)
{
	int num = 0;


	for (int i = 0; i < v.size(); i++)
	{
		num += v[i] *  (int) (pow(10, (v.size()-i-1)));
	}

	return num;

}

void printArr(std::vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}
	cout << '\n';
}