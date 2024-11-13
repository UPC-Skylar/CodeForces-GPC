// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solution(int longitud){
	vector <int> arrNumbers;

	for(int j = 0; j < longitud; j++){
		int x; cin >> x;
		arrNumbers.push_back(x);
	}

	sort(arrNumbers.begin(), arrNumbers.end());
	
	for(int k = 0; k < arrNumbers.size() - 1; k++)
		if(abs(arrNumbers[k] - arrNumbers[k + 1]) <= 1) longitud--;
	
	cout << (longitud == 1 ? "YES" : "NO") << endl;
}

int main() {
	int t, longitud; cin >> t;
	for(int i = 0; i < t; i++){
		longitud; cin >> longitud;
		solution(longitud);
	}
}
