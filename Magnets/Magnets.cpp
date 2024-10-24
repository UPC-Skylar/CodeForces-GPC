// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int algorithm(int &n){
	int cantImanes = 1;
	string aux; cin >> aux; //10
	for(int i = 1; i < n; i++){
			string s; cin >> s; 
			if(aux[1] == s[0]) cantImanes++;
			aux = s;
	}
	return cantImanes;
}

int main() {
	int n; cin >> n;
	cout << algorithm(n) << endl;
}
