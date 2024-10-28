// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	int valorMax, valorMin, indiceMax, indiceMin;
	int contador = 0;
	vector <int> aux;
	vector <int> arrNum; //Este es el vector original q contiene los num
	for(int i = 0; i < n; i++){
		int p; cin >> p;
		aux.push_back(p);
		arrNum.push_back(p);
	}

	sort(aux.begin(), aux.end());

	valorMax = aux[aux.size() - 1];
	valorMin = aux[0];

	//El valor maximo debe quedar en la posicion 0 
	//Mientras que el valor minimo debe quedar en la posicion final

	for(int i = 0; i < n; i++)
		if(arrNum[i] == valorMax) {
			indiceMax = i;
			break;
		}

	for(int i = indiceMax; i > 0 ; i--){
		swap(arrNum[i], arrNum[i - 1]);
		contador++;
	}

	for(int i = n - 1; i > 0; i--)
		if(arrNum[i] == valorMin) {
			indiceMin = i;
			break;
		}

	for(int i = indiceMin; i < n - 1; i++){
		swap(arrNum[i], arrNum[i + 1]);
		contador++;
	}

	cout << contador;
}