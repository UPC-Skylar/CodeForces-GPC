// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int a, b; cin >> a >> b;
		int minimo = min(a, b);
		int maximo = max(a, b);
		int result = minimo * 2;
		while(result < maximo)
			result++;

		cout << pow(result, 2) << endl;
	}
}
