// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int matriz[5][5];
    int posx, posy, movimientos = 0; //Posiciones del 1
    //pos ideal x = 2 y 2
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matriz[i][j];
            if(matriz[i][j] == 1){
                posx = i; 
                posy = j;
            }
        }
    }
    movimientos += abs(posx - 2);
    movimientos += abs(posy - 2);
    cout << movimientos;
}
