// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v1(3), v2(3), v3(3), sumas;
    int a, b, c;

    for(int & x: v1) cin >> x;
    for(int & x: v2) cin >> x;
    for(int & x: v3) cin >> x;

    int sumA = 0;
    for(int x : v1) sumA += x;
    sumas.push_back(a + sumA);

    int sumB = 0;
    for(int x : v2) sumB += x;

    int sumC = 0;
    for(int x : v3) sumC += x;

    int sumaDiag = (sumA + sumB + sumC) /2;
    a = sumaDiag - sumA;
    b = sumaDiag - sumB;
    c = sumaDiag - sumC;

    v1[0] = a;
    v2[1] = b;
    v3[2] = c;

    for(int x : v1) cout << x << " ";
    cout << "\n";
    for(int x : v2) cout << x << " ";
    cout << "\n";
    for(int x : v3) cout << x << " ";
}
