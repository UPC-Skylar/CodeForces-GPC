// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

string algorithm(int n){
	if(n == 1) return "I hate it";
	string result = "I hate that";
	for(int i = 1; i <= n; i++){ //1,2
		if(i % 2 != 0 && i < n && i != 1) result += " I hate that";
		else if(i % 2 == 0 && i < n) result += " I love that";
		else if(i % 2 != 0 && i == n) result += " I hate";
		else if(i % 2 == 0 && i == n) result += " I love";
	}
	result += " it";
	return result;
}

int main() {
	int n; cin >> n;
	cout << algorithm(n);
}
