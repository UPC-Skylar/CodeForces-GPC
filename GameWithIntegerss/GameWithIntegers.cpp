// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		cout << (x % 3 == 0 ? "Second" : "First") << endl;
	}
}
