// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool solution(string s){
	if(s.size() % 2 != 0) return false;
	else {
		string aux = s.substr(s.size() / 2);
		string aux2 = s.substr(0, s.size() / 2);
		return (aux == aux2 ? true : false);
	}
}

int main() {
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		cout << (solution(s) ? "YES" : "NO") << endl;
	}
}
