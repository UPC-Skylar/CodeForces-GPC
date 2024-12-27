// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool verificar(char x, string s){
	if(s.find(x) != string::npos) return false; //Si existe no sirve
	return true; //Si no existe sirve
}

string solution(){
	int n; cin >> n; //tamaño del string
	string s; cin >> s;
	string aux = "";
	aux += s[0];
	for(int i = 0; i < n; i++){
		if(s[i] != s[i + 1] && verificar(s[i + 1], aux)) aux.push_back(s[i + 1]);
		else if(s[i] != s[i + 1] && !verificar(s[i + 1], aux)) return "NO";
	}

	return "YES";
}

int main() {
	int t; cin >> t;
	while(t--){
		cout << solution() << endl;
	}
}
