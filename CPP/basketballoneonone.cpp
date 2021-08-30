//Basketball One-on-One https://open.kattis.com/problems/basketballoneonone

#include <iostream>
#include <string>

using namespace std;

int main(){

	int a_score = 0;
	int b_score = 0;


	string input;

	cin >> input;

	for(int i=0; i<input.length(); i+=2){

		if(input.at(i) == 'A'){

			a_score += int(input.at(i+1)-48);
		}


		else if(input.at(i) == 'B'){

			b_score += int(input.at(i+1))-48;

		}

		if(a_score >= 11 || b_score >= 11){
			if(a_score >= b_score+2){
				cout << "A";
				return 0;
			}
			if(b_score >= a_score +2){
				cout << "B";
				return 0;

			}
		}
	}

	return 0;
}