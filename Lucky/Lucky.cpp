// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void solution(string s) {
	int firstPart = (s[0] + '0') + (s[1] + '0') + (s[2] + '0');
	int secondPart = (s[3] + '0') + (s[4] + '0') + (s[5] + '0');
	cout << (firstPart == secondPart ? "YES" : "NO") << endl;
}

int main() {
	int x; cin >> x;
	string s;
	for(int i = 0; i < x; i++){
		cin >> s;
		solution(s);
	}
}