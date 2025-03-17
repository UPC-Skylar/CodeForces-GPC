// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n, a, b; cin >> n >> a >> b;
    //verifiquemos que efectivamente b es menor que 2a
    if(b < 2 * a){ 
        int numB = n / 2;
        return (n % 2 == 0 ? numB * b : numB * b + a);
    }
    else return n * a;
}

int main() {
	int t; cin >> t;
    while(t--) cout << solve() << endl;
}
