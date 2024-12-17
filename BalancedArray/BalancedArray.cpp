// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solucion(int n){
	//MITAD PAR, MITAD IMPAR Y LA SUMA DE AMBAS MITADES DEBE SER IGUAL
	int sumaPar = 0;
	int sumaImpar = 0;
	vector <int> balancedArray;
	for(int i = 2; i <= n; i+= 2){
		balancedArray.push_back(i);
		sumaPar += i;
	}

	int k = 0;
	for(int i = 1; i <= (n / 2) - 1; i++){
		balancedArray.push_back(i + k);
		sumaImpar += (k + i);
		k++;
	}

	if((sumaPar - sumaImpar) % 2 == 0) cout << "NO";
	else {
		cout << "YES" << endl;
		balancedArray.push_back(sumaPar - sumaImpar);
		for(int x : balancedArray)
			cout << x << " ";
	}

}

int main() { 
	int t; cin >> t;
	while(t--){
		int n; cin >> n; //longitud del arreglo
		solucion(n);
		cout << endl;
	}
}