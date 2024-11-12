// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int cantMililitros = k * l; 
	int cantidadRodajas = c * d; 
	int cantBrindis = 0; 

	while(cantidadRodajas >= n && cantMililitros >= (n * nl) && p >= (n * np)){
		cantMililitros -= (n * nl);
		cantidadRodajas -= n;
		p -= (n *np);
		cantBrindis++;
	}

	cout << cantBrindis;
}
