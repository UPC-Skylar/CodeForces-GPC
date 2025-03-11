// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    vector<int> atletas(n);

    for(int &a : atletas) cin >> a;

    int minResta = 90000;

    for(int i = 0; i < atletas.size() - 1; i++){
        for(int j = 0; j < atletas.size(); j++){
            if(i == j) continue;
            int x = abs(atletas[i] - atletas[j]);
            if(x < minResta) minResta = x;
        }
    }

    return minResta;

}

int main() {
	int t; cin >> t;
    while(t--) cout << solve() << endl;
}
