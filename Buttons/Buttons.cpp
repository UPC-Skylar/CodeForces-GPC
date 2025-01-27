// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
    int maxNumber = max(max(a + b, 2 * a - 1), 2 * b -1);
    cout << maxNumber << endl;
}
