// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;

    vector <int> numeros(n);

	for(int i = 0; i < n; i++)
		cin >> numeros[i];

	int sumDina = 0, sumSereja = 0;
    bool turnoSereja = true;

	while(!numeros.empty()){
		int valorElegido;
        if(numeros.front() > numeros.back()){
            valorElegido = numeros.front();
            numeros.erase(numeros.begin());
        } else {
            valorElegido = numeros.back();
            numeros.pop_back();
        }

        if(turnoSereja) 
            sumSereja += valorElegido;
        else
            sumDina += valorElegido;

        turnoSereja = !turnoSereja;

	}
	cout << sumSereja << endl << sumDina;
    return 0;
}
