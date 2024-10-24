// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int result;
	n++;
	while(true){
		int M = n / 1000;
		int C = (n % 1000) / 100;
		int D = ((n % 1000) % 100) / 10;
		int U = ((n % 1000) % 100) % 10;
		if(M != C && M != D && M != U && C != D && C != U && D != U){
			result = n;
			break;
		} 
		n++;
	}
	cout << result << endl;
}
