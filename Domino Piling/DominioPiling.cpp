// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M; cin >> N >> M;
    int dimensiones = N * M, cantMaxDominos = 0;
    if(dimensiones % 2 == 0) cantMaxDominos = dimensiones / 2;
    else 
        cantMaxDominos = (dimensiones - 1) / 2;
    cout << cantMaxDominos;
}
