// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void solution(int n){
	//Cantidad
	int cantidadSolution = floor(n / 2);
	cout << cantidadSolution << endl;

	vector <int> numeros;
	for(int i = 0; i < cantidadSolution; i++){
		if(n % 2 == 0){
			numeros.push_back(2);
		} else {
			//IMPAR
			if(i == cantidadSolution - 1) numeros.push_back(3);
			else numeros.push_back(2);
		}
	}

	cout << endl;

	for(int x : numeros)
		cout << x << endl;
}

int main() {
	int n; cin >> n;
	solution(n);
}
