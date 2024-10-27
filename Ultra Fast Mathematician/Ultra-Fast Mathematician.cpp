// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	string n1, n2; cin >> n1 >> n2;
	string result = "";
	for(int i = 0; i < n1.size(); i++){
		if(n1[i] != n2[i]) result += '1';
		else 
			result += '0';
	}

	cout << result << endl;
}
