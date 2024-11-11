// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x1, x2, x3; cin >> x1 >> x2 >> x3;
	int maximo = max({x1,x2,x3});
	int minimo = min({x1,x2,x3});
	int puntoMedio = x1 * (x1 > minimo && x1 < maximo) + x2 * (x2 > minimo && x2 < maximo) + x3 * (x3 > minimo && x3 < maximo);
	cout << abs(x1 - puntoMedio) + abs(x2 - puntoMedio) + abs(x3 - puntoMedio);
}
