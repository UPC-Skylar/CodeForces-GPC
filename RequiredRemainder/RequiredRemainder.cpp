// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int solution(int x, int y, int n){
	// k <= n
	// k % x = y
	int numero = floor((n - y) / x);
	return x * numero + y;
}

int main() {
	int t; cin >> t;
	while(t--){
		int x, y, n; cin >> x >> y >> n;
		cout << solution(x,y,n) << endl;
	}
}
