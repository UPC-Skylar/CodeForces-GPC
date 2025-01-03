// Source: https://usaco.guide/general/io

#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

long long solve(){
	int n; cin >> n; //tamano del array
	vector <int> numeros(n);

	for(int i = 0; i < n; i++)
		cin >> numeros[i];

	auto minElement = min_element(numeros.begin(), numeros.end());

	for (int i = 0; i < n; i++) {
        if (numeros[i] == *minElement) {
            numeros[i]++;
            break; // Solo incrementamos el primer mínimo encontrado
        }
    }

	long long multiplicacion = 1;

	for(int x : numeros)
		multiplicacion *= x;

	return multiplicacion;
}

int main() {
	int t; cin >> t;
	while(t--){
		cout << solve() << endl;
	}
}
