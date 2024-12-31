// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void solution(int x){
	if(x == 1) cout << "1 0" << endl;
	else if(x == 2) cout << "0 1" << endl;
	else {
		int minimo2 = floor(x / 3);
		int minimo1 = x - 2 * minimo2;
		int diferencia = abs(minimo2 - minimo1);
		while(diferencia > 1){
			minimo2++;
			minimo1 -= 2;
			diferencia = abs(minimo2 - minimo1);
		}
		cout << minimo1 << " " << minimo2 << endl;
	}
}

int main() {
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		solution(x);
	}
}
