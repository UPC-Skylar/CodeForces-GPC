// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void solution(){
	string s; cin >> s;
	int firstNumber = s[0] - '0';
	int secondNumber = s[2] - '0';

	cout << firstNumber + secondNumber << endl;
}

int main() {
	int t; cin >> t;
	while(t--){
		solution();
	}
}
