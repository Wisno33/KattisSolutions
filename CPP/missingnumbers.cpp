//Missing Numbers https://open.kattis.com/problems/missingnumbers

#include <iostream>
#include <vector>

using namespace std;


int main()
{

	int numNums;

	cin >> numNums;

	int input;
	int curr = 1;
	int next = 2;

	bool wrong = false;

	vector<int> missing;

	for(int i=0; i<numNums; i++){

		cin >> input;

		if(input == curr){
			curr += 1;
		}

		else{
			for(int j=0; j<input-curr; j++){
				missing.push_back(curr+j);
			}
			wrong = true;
			curr = input+1;
		}
	}

	if(wrong){
		for(int i=0; i<missing.size(); i++){
			cout << missing[i] << "\n";
		}
	}

	else{
		cout << "good job";
	}

	

	return 0;
}