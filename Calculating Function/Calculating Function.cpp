// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n; cin >> n;
	cout << (n % 2 == 0 ? n / 2 : -1 * ((n + 1 )/ 2));
}
