// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, h; cin >> n >> h; // n = n° de amigos,  h = altura de la cerca
	int result = 0;
	for(int i = 0; i < n; i++){
		int p; cin >> p;
		if(p <= h) result++;
		else result += 2;
	}
	cout << result << endl;
}
