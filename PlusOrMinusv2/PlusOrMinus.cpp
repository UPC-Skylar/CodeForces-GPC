// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int a, b, c; cin >> a >> b >> c;
		cout << (a + b == c ? "+" : "-") << endl;
	}
}
