// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int solution(int x){
	int pasos = 0;
	if(x < 5) return 1;
	if(x >= 5){
		if(x % 5 != 0) pasos = round(x / 5) + 1;
		else if(x % 5 == 0) pasos = x / 5;
	}
	return pasos;
}

int main() {
	int x; cin >> x;
	cout << solution(x);
}
