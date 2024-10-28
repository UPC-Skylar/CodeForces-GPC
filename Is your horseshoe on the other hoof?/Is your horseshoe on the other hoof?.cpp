// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int n1, n2, n3, n4; cin >> n1 >> n2 >> n3 >> n4;
	vector <int> v1; //[2]
	v1.push_back(n1);
	if(n2 != n1) v1.push_back(n2);
	if(n3 != n1 && n3 != n2) v1.push_back(n3);
	if(n4 != n1 && n4 != n2 && n4 != n3) v1.push_back(n4);

	cout << 4 - v1.size();
}
