// Source: https://usaco.guide/general/io

#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		vector <int> numeros(4);
		for(int i = 0; i < 4; i++)
			cin >> numeros[i];
	
		//Ya tengo los numeros en el arreglo

		auto maxElement = max_element(numeros.begin(), numeros.end());
		int secondMaxE = 0;
		for(int x : numeros)
			if(x > secondMaxE && x != *maxElement) secondMaxE = x;

		int result = *maxElement + secondMaxE;
		
		int finalista1 = max(numeros[0], numeros[1]);
		int finalista2 = max(numeros[2], numeros[3]);

		cout << (finalista1 + finalista2 == result ? "YES" : "NO") << endl;

	}
}