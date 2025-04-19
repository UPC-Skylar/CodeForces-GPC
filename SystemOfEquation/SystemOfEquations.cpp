// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool isValid(int a, int b, int n, int m){
    return (pow(a, 2) + b == n && a + pow(b, 2) == m ? true : false);
}

// a^2 = n - b  =>  n - b >= 0   =>  0 <= b <= n
// b^2 = m - a  =>  m - a >= 0   =>  0 <= a <= m

int main() {
	int n, m; cin >> n >> m;
    int contador = 0;
    for(int i = 0; i <= n; i++)
        for(int j = 0; j <= m; j++) if(isValid(i,j,n,m)) contador++;

    cout << contador;
}
