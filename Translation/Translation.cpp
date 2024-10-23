// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t; cin >> s >> t;
	string aux = "";
	for(int i = s.size() - 1; i >= 0; i--)
		aux += tolower(s[i]);

	(aux == t ? cout << "YES" : cout << "NO");
}
