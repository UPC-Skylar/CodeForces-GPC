// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x1, x2, x3, x4; cin >> x1 >> x2 >> x3 >> x4;
	string s; cin >> s;
	int calorias = 0;
	vector <int> columnas = {x1, x2, x3, x4};
	for(char x : s)
		calorias += columnas[x - '0' - 1];

	cout << calorias;
}
