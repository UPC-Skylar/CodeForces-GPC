// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void boyOrGirl(string s){ // ['s', 'e', 'v', 'e', 'n', 'k', 'p', 'l', 'u', 's']
	string aux = "";
	for(int i = 0; i < s.size(); i++){
		int pos = aux.find(s[i]);
		if(pos == string::npos) aux += s[i];
	}

	if(aux.size() % 2 == 0) cout << "CHAT WITH HER!";
	else 
		cout << "IGNORE HIM!";
}

int main() {
	string s; cin >> s;
	boyOrGirl(s);
}
