// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	float porcentajeNum;
	float acumulado = 0;
	for(int i = 0; i < n; i++){
		cin >> porcentajeNum;
		acumulado += (porcentajeNum / 100);
	}

	cout << (acumulado / n) * 100 << endl;
}
