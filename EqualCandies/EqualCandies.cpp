// Source: https://usaco.guide/general/io

#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void solution(){
	int n; cin >> n; //numero de cajas
	vector <int> numeros(n);

	for(int i = 0; i < n; i++){
		cin >> numeros[i];
	}

	auto minElement = min_element(numeros.begin(), numeros.end());
	int caramelos = 0;

	for(int x : numeros)
		caramelos += (x - *minElement);

	cout << caramelos << endl;
	
}

int main() {
	int t; cin >> t;
	while(t--){
		solution();
	}
}
