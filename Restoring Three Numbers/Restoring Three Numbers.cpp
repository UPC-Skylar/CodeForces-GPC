// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void validar(long long x, long long suma){
	if(x != suma) cout << suma - x << endl;
}

int main() {
	long long x1, x2, x3, x4; cin >> x1 >> x2 >> x3 >> x4;
	long long suma = (x1 + x2 + x3 + x4) / 3; //a + b + c
	
	validar(x1, suma);
	validar(x2, suma);
	validar(x3, suma);
	validar(x4, suma);
}