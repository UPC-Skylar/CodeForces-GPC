// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x; cin >> x;
	int sumaTotal = 0;
	for(int i = 1; sumaTotal <= x; i++){
		sumaTotal += (i * (i + 1)) / 2;
		if(sumaTotal > x) {
			cout << i - 1;
			break;
		}
	}
}
