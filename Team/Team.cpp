// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int solution(){
    int contador;
    int r1, r2, r3; cin >> r1 >> r2 >> r3;  // 1 0 1
    contador = r1 + r2 + r3;
    if(contador >= 2) 
        return 1;
    else 
        return 0;
}

int main() {
	int cantProblemas, result = 0; cin >> cantProblemas;
    for(int i = 0; i < cantProblemas; i++)
        result += solution();
    cout << result;
}
