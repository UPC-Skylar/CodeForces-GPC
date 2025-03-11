// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n; //2x2 elementos
    vector<char> v1, v2;

    for(int i = 0; i < 2 * n; i++){
        char x; cin >> x;
        if(x == 'G' || x == 'B') x = 'X';

        if(i < n) v1.push_back(x);
        else v2.push_back(x);
    }

    bool isEqual = true;
    for(int i = 0; i < n; i++) {
        if(v1[i] != v2[i]) {
            isEqual = false;
            break;
        }
    }

    cout << (isEqual ? "YES" : "NO") << endl;

}

int main() {
	int t; cin >> t;
    while(t--) solve();
}
