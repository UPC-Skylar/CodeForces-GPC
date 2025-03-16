// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

float solve(){
    float x; cin >> x;
    return round((x + 1) / 4);
}

int main() {
	int t; cin >> t;
    while(t--) cout << solve() << endl;
}
