// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

string solve(){
    int n; cin >> n;
    string s; cin >> s;
    int x = 0, y = 0;  //Para alcanzar caramelo x = 1 , y = 1

    //y = 1, x = 1

    for(char &l : s) {

        switch(l){
            case 'U': y++; break;
            case 'D': y--; break;
            case 'R': x++; break;
            case 'L': x--; break;
        }
        if(x == 1 && y == 1) return "YES";
    } 
    return "NO";
}

int main() {
	int t; cin >> t;
    while(t--) cout << solve() << endl;
}
