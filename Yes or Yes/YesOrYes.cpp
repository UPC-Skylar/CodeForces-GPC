// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string aux = "";
	for(int i = 0; i < n; i++){
		string x; cin >> x;
		for(char element : x)
			aux += toupper(element);
		
		cout << (aux == "YES" ? "YES" : "NO") << endl;
		aux.clear();
	}
}
