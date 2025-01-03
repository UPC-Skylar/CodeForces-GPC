// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int sumaTotal = 0;
		vector <int> numeros(n);
		for(int i = 0; i < n; i++)
			cin >> numeros[i];
		
		for(int x : numeros)
			sumaTotal += x;

		cout << (sumaTotal % 2 == 0 ? "YES" : "NO") << endl;
	}
}
