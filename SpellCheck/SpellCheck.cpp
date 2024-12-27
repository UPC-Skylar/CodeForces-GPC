// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool verificarS(string s){

}

void solution (int n, string &s){
	string r = "Timur";
	sort(r.begin(), r.end());
	sort(s.begin(), s.end());

	if(n != 5) cout << "NO" << endl;
	else { //Tiene solo 5 char

	cout << (s == r ? "YES" : "NO") << endl;
	}
}

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		solution(n, s);
	}
}
