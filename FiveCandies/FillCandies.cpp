// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n, k, m; cin >> n >> k >> m;
    // n = caramelos, k = bolsillos, m = maximoCaramelos por bolsillo
    int cantCaramelosMax = k * m, cantBolsas = 0;

    while(cantBolsas * cantCaramelosMax < n)
        cantBolsas++;

    cout << cantBolsas << endl;
}

int main() {
	int t; cin >> t;
    while(t--)
        solution();

    return 0;
}
