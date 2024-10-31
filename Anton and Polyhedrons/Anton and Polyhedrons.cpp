// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int contador = 0;
	for(int i = 0; i < n; i++){
		string polyhedron; cin >> polyhedron;
		if(polyhedron == "Tetrahedron") contador += 4;
		else if(polyhedron == "Cube") contador += 6;
		else if(polyhedron == "Octahedron") contador += 8;
		else if(polyhedron == "Dodecahedron") contador += 12;
		else if(polyhedron == "Icosahedron") contador += 20;
	}

	cout << contador;
}
