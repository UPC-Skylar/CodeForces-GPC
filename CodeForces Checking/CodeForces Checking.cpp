// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	set <char> str;
	string palabra = "codeforces";

	for(char c : palabra){
		str.insert(c);
	}
	
	while (t--) {
		char a; cin >> a;
		cout << (str.find(a) != str.end() ? "YES" : "NO") << endl;
	}
}