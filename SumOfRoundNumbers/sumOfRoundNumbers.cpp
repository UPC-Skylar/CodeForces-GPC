// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int n, x, contador = 0; cin >> n;
	int multiplicador = 1;
	vector <int> numeros;
	string aux;
	for(int i = 0; i < n; i++){
		cin >> x; 
		if(x < 10){
			cout << 1 << endl << x << endl;
			continue;
		}
		
		aux = to_string(x); //5009
		for(int j = aux.size() - 1; j >= 0; j--){
			int digit = aux[j] - '0';
			if(digit != 0) {
				numeros.push_back(digit * multiplicador);
				contador++;
			}
			multiplicador *= 10;
		}

		cout << contador << endl;
		for(int element : numeros)
			cout << element << '\t';
		
		cout << endl;
		//reiniciamos las variables
		numeros.clear();
		multiplicador = 1;
		contador = 0;
		aux.clear();

	}

	return 0;
}
