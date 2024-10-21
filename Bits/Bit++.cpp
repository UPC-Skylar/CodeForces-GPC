// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x = 0, n; cin >> n; // n = numero de declaraciones
	for(int i = 0; i < n; i++){
		string input; cin >> input;
		if(input == "X++" || input == "++X") x++;
		else x--;
	}
	cout << x;
}
