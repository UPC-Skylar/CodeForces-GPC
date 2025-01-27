// Source: https://usaco.guide/general/io

#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c, d, e, k; cin >> a >> b >> c >> d >> e >> k;
    // k = limitador de distancia
    vector <int> distAntenas = {a , b, c, d, e};
    auto maxAntena = max_element(distAntenas.begin(), distAntenas.end());
    auto minAntena = min_element(distAntenas.begin(), distAntenas.end());

    cout << (k >= (*maxAntena - *minAntena) ? "Yay!" : ":(");
}

int main() {
	solve();
}
