// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    string s; cin >> s;

    char maxValue = s[0];
    for(char x : s) if(x > maxValue) maxValue = x;

    int result = maxValue - 96;

    return result;
} 

int main() {
	int t; cin >> t;
    while(t--) cout << solve() << endl;
}
