// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, n, w; cin >> k >> n >> w;
	// k = precio banana (va aumentando)
	// n = cant de dolares que tiene
	// w = numero bananas a comprar
	int montotal = 0;
	for(int i = 1; i <= w; i++)
		montotal += i * k;
	if(montotal >= n)
		cout << abs(montotal - n);
	else 
		cout << 0;
}
