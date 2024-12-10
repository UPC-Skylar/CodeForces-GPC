// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int solution(int a, int b, int c){
	vector <int> arr = {a, b, c};
	int minimo = INT_MAX;
	int maximo = INT_MIN;
	for(int element : arr){
		minimo = min(minimo, element);
		maximo = max(maximo, element);
	}

	for(int element : arr)
		if(element != minimo && element != maximo) return element;
}

int main() {
	int n; cin >> n;
	while(n--){
		int a, b, c; cin >> a >> b >> c;
		cout << solution(a,b,c) << endl;
	}
}
