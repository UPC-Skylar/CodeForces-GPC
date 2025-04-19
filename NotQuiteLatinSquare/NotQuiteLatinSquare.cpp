// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;



char solve(){
    string s1, s2, s3; cin >> s1 >> s2 >> s3;
    
    set<char> result;
    for(int i = 0; i < 3; i++){
        if(s1[i] == '?') {
            for(int y = 0; y < 3; y++) if(s1[y] != '?') result.insert(s1[y]);
            if(result.count('A') == 0) return 'A';
            else if(result.count('B') == 0) return 'B';
            else if(result.count('C') == 0) return 'C';
        }
    }

        for(int i = 0; i < 3; i++){
        if(s2[i] == '?') {
            for(int y = 0; y < 3; y++) if(s2[y] != '?') result.insert(s2[y]);
            if(result.count('A') == 0) return 'A';
            else if(result.count('B') == 0) return 'B';
            else if(result.count('C') == 0) return 'C';
        }
    }

        for(int i = 0; i < 3; i++){
        if(s3[i] == '?') {
            for(int y = 0; y < 3; y++) if(s3[y] != '?') result.insert(s3[y]);
            if(result.count('A') == 0) return 'A';
            else if(result.count('B') == 0) return 'B';
            else if(result.count('C') == 0) return 'C';
        }
    }

    return 'A';
}

int main() {
	int t; cin >> t;
    while(t--) cout << solve() << endl;
}
