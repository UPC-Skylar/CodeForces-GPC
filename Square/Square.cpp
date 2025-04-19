// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int solve(){
    set<int> cordxs, cordys;

    for(int i = 0; i < 4; i++){
        int x, y; cin >> x >> y;
        cordxs.insert(x);
        cordys.insert(y);
    }

    vector<int> cordx, cordy;

    for(int x : cordxs) cordx.push_back(x); 
    for(int y : cordys) cordy.push_back(y); 

    return abs(cordx[0] - cordx[1]) * abs(cordy[0] - cordy[1]);
}

int main() {
	int t; cin >> t;
    while(t--) cout << solve() << endl;
}
