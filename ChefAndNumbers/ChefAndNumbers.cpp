// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int S(int x){
    int resultado = 0;
    while(x > 0){ //Sumamos los digitos del numero
        int digit = x % 10;
        x /= 10;
        resultado += digit;
    }
    return resultado;
}

/*  Validar que x + S(x) + S(S(x)) = n;
    En el peor de los casos....
    S(x) = 999999999 = 81
    S(S(x)) = 9

    x + 100 > n
    x > 100 - n                   */

int main() {
	int n; cin >> n;
    int cantNum = 0;

    for(int i = n - 100; i <= n; i++)  if(i + S(i) + S(S(i)) == n) cantNum++;
    cout << cantNum;
}
