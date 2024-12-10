// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int hallarCantDivisores(int numero){
	int cantDivisores = 0, i = 1, nro = 1;
	while(i <= numero){
		if(numero % nro == 0) cantDivisores++;
		i++;
		nro++;
	}

	return cantDivisores;
}

int solucion(int n){
	int result;
	for(int i = 2; i <= n; i++){
		if(hallarCantDivisores(i) > 2 && hallarCantDivisores(n - i) > 2)
			return i;
	}
}

int main() {
	int n; cin >> n;
	cout << solucion(n) << endl << n - solucion(n);
}
