// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string result = "EASY";
	for(int i = 0; i < n; i++){
		int aux; cin >> aux;
		if(aux == 1){
			result = "HARD";
			break;
		}
	}

	cout << result << endl;
}
