// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> habilidadNinos;
	vector <bool> escogido;
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		habilidadNinos.push_back(x);
		escogido.push_back(false);
	}

	int c1 = 0, c2 = 0, c3 = 0;
	for(int h : habilidadNinos){
		if (h == 1) c1++;
		else if (h == 2) c2++;
		else if (h == 3) c3++;
	}

	int cantidadEquipos = min(min(c1, c2), c3);

	if(cantidadEquipos == 0) cout << 0;
	else {
		cout << cantidadEquipos << endl;
		vector <int> h1;
		vector <int> h2;
		vector <int> h3;
		int i = 0;

		for(int i = 0; i < habilidadNinos.size(); i++){
			if(habilidadNinos[i] == 1) h1.push_back(i + 1);
			else if(habilidadNinos[i] == 2) h2.push_back(i + 1);
			else if(habilidadNinos[i] == 3) h3.push_back(i + 1);
		}

		while(i < cantidadEquipos){
			cout << h1[i] << " " << h2[i] << " " << h3[i] << endl;
			i++;
		}
	}
}
