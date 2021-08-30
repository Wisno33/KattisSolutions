//CD https://open.kattis.com/problems/cd

#include <iostream>
#include <unordered_set>

using namespace std;

int main(){

	unordered_set<int> map;

	while(true){

		map.clear();

		int N;
		int M;
		int cd;

		cin >> N;
		cin >> M;

		if(N == 0 && M == 0){
			break;
		}

		int count = 0;

		for(int i=0; i<N; i++){
			cin >> cd;
			map.insert(cd);
		}

		for(int i=0; i<M; i++){
			cin >> cd;
			if(map.count(cd)){
				count++;
			}
		}

		cout << count << "\n";

	}

	return 0;
}