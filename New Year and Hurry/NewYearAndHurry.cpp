// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k; //Empieza 8 pm y debe estar antes de las 12
	//Es decir tendremos como maximo 240 minutos disponibles
	int tiempoDisponible = 240 - k; //50 minutos
	int tiempoConsumido = 0;
	int cantProblemas = 0;
	//tenemos 240 - k disponibles
	for(int i = 1; i <= n; i++){
		if(tiempoConsumido < tiempoDisponible && tiempoConsumido + (5 * i) <= tiempoDisponible){
			tiempoConsumido += (5 * i);
			cantProblemas++;
		}	
		else 
			break;
	}

	cout << cantProblemas;

}
