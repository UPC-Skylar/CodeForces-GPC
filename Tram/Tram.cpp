// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, cantPasajeros = 0; cin >> n; //n = numero de paradas del tranvia
	int capacidad = 0;
	vector <int> pasajeros;
	for(int i = 0; i < n; i++){
		int an, bn; cin >> an >> bn;
		cantPasajeros += bn;
		cantPasajeros -= an;
		pasajeros.push_back(cantPasajeros);
	}
	for(int element : pasajeros)
		if(element > capacidad) capacidad = element;
	
	cout << capacidad << endl;
}
