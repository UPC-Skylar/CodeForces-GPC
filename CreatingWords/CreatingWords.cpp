// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void solution(){
	char auxiliar;
	string s1, s2; cin >> s1 >> s2;
	auxiliar = s1[0];
	s1[0] = s2[0];
	s2[0] = auxiliar;
	cout << s1 << " " << s2;
}

int main() {
	int t; cin >> t;
	while(t--){
		solution(); cout << endl;
	}
}
