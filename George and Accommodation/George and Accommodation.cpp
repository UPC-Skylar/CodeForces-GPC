// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int contador = 0;
	for(int i = 0; i < n; i++){
		int a, b; cin >> a >> b;
		if(b - a >= 2) contador++;
	}

	cout << contador << endl;
}
