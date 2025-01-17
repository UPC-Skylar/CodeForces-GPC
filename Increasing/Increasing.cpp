// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool verificarArray(vector <int> &numeros){
	bool resultado = true;
	sort(numeros.begin(), numeros.end());

	//Ordenamos el arreglo
	for(int i = 0; i < numeros.size() - 1; i++){
		if(numeros[i] == numeros[i + 1]){
			resultado = !resultado;
			break;
		}
	}

	return resultado;
}

void solution(){
	int n; cin >> n; //tamaño del array
	vector <int> numeros(n);

	for(int i = 0; i < n; i++)
		cin >> numeros[i];
	
	cout << (verificarArray(numeros) ? "YES" : "NO") << endl;
}

int main() {
	int t; cin >> t;
	while(t--){
		solution();
	}
}
