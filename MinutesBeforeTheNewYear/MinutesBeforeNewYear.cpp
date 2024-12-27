// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int solution(int h, int m){
	int tiempoAnioNuevo = 1440; //a las 1440 minutos es anio nuevo
	return (tiempoAnioNuevo - (h * 60 + m));
}

int main() {
	int t; cin >> t;
	while(t--){
		int h, m; cin >> h >> m;
		cout << solution(h, m) << endl;
	}
}
