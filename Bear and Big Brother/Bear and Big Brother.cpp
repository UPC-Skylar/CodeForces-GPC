// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;


void solution(int &a, int &b){
	int cantAnios = 0;
	while(a <= b){
		a = a*3;
		b = b*2;
		cantAnios++;
	}

	cout << cantAnios;
}

int main() {
	int a, b; cin >> a >> b;
	solution(a, b);
}
