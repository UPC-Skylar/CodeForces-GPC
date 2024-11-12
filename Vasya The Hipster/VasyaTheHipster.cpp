// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	cout << min(a, b) << endl;
	cout << floor((max(a,b) - min(a, b)) / 2);
}
