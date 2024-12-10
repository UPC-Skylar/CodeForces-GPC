// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool verificar(vector <bool> &boolAlumnos){
	int contador = 0;
		for(bool e : boolAlumnos)
			if(e) contador++;
	
	return (contador >= 3) ? true : false;
}

int main() {
	int n, k; cin >> n >> k;
	vector <int> alummnos;
	vector <bool> boolAlumnos;
	while(n--){
		int x; cin >> x;
		alummnos.push_back(x);
		if (x + k <= 5) boolAlumnos.push_back(true);
		else 
			boolAlumnos.push_back(false);
	}

	int contadorEquipos = 0;

	while(verificar(boolAlumnos)){
		int contador = 0;
		for(int i = 0; i < alummnos.size(); i++){
			if(boolAlumnos[i]) {
				contador++;
				boolAlumnos[i] = !boolAlumnos[i];
			}

			if(contador == 3) {
				contadorEquipos++;
				break;
			}
		}

	}

	cout << contadorEquipos;
	return 0;
}
