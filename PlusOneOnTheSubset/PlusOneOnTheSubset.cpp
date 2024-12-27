// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void solution(){
	int n; cin >> n;
	vector <int> numeros;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		numeros.push_back(x);
	}

	//Hallamos el mayor y menor del arreglo
	auto maxValor = max_element(numeros.begin(), numeros.end());
	auto minValor = min_element(numeros.begin(), numeros.end());

	cout << *maxValor - *minValor << endl;
}

int main() {
	int t; cin >> t;
	while(t--){
		solution();
	}
}
