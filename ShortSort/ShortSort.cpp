// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

string solution(string s){
	if(s[0] != 'a' && s[1] != 'b' && s[2] != 'c') return "NO";
	return "YES";
}

int main() {
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		cout << solution(s) << endl;
	}
}
