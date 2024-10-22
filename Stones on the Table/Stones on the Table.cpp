// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, contador = 0; cin >> n;
	string str = "";
	for(int i = 0; i < n; i++){
		char aux; cin >> aux;
		str += aux;
	}
	for(int i = 0; i < str.size() - 1; i++){
		if(str[i] == str[i + 1]) contador++;
	}

	cout << contador;
}
