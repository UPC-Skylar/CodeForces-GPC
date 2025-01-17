// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	int cA = 0, cB = 0;
	while(t--){
		//Reiniciamos valores
		cA = 0; cB = 0;
		string s; cin >> s;
		for(char letra : s)
			(letra == 'A' ? cA++ : cB++);
		
		cout << (cA > cB ? "A" : "B") << endl;
	}
}
