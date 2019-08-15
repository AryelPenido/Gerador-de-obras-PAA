//
// Created by aryels on 09/08/19.
//

#include "quadro.h"
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

 void ImprimeMatriz(char matriz[20][80]){
     for(int i = 0; i<20;i++) {
         printf("\n");
         for (int j = 0; j < 80; j++) {
             printf("%c",matriz[i][j]);
         }
     }
 }
void IniciaMatriz(char matriz [20][80]){

    for(int i = 0; i<20;i++){
        for(int j = 0; j<80;j++){
            if(i == 0 || i == 19){
                matriz[i][j] = '-';
                continue;
            }
            if(j == 0 || j == 79){
                matriz[i][j] = '|';
                continue;
            }
            matriz[i][j] = ' ';

        }

    }



}

void asterisco(char matriz [20][80],int q) {
    int x, y;
    if(q > 100)
        q = 100;

    for (int i = 0; i < q; i++) {
        while (1) {
            x = 1 + rand() % 18;
            y = 1 + rand() % 78;

            if (matriz[x][y] == ' ')
                break;
        }
        matriz[x][y] = '*';
    }

}

void soma(char matriz [20][80],int q){
    int x, y;
    if(q > 100)
        q = 100;
    for (int i = 0; i < q; i++) {
        while (1) {
            x = 1 + rand() % 17;
            y = 1 + rand() % 77;

            if (matriz[x][y] == ' ' && matriz[x+1][y] ==' ' && matriz[x-1][y] ==' ' && matriz[x][y+1] == ' ' && matriz[x][y-1] ==' ' )
                break;
        }
        matriz[x][y] = '*';
        matriz[x+1][y] = '*';
        matriz[x-1][y] = '*';
        matriz[x][y+1] = '*';
        matriz[x][y-1] = '*';
    }

}

void mult(char matriz [20][80],int q){
    int x, y;
    if(q > 100)
        q = 100;

     for (int i = 0; i < q; i++) {
        while (1) {
            x = 1 + rand() % 17;
            y = 1 + rand() % 77;

            if (matriz[x][y] == ' ' && matriz[x+1][y+1] ==' ' && matriz[x-1][y+1] ==' ' && matriz[x-1][y-1] == ' ' && matriz[x+1][y-1] ==' ' )
                break;
        }
        matriz[x][y] = '*';
        matriz[x+1][y+1] = '*';
        matriz[x-1][y+1]  = '*';
        matriz[x-1][y-1] = '*';
        matriz[x+1][y-1] = '*';
    }

}

void Aleatorio(char matriz[20][80], int q){
    int a, s, x;
    srand(time(NULL));

    a = rand()%q;
    s =rand()%(q-a);
    x= q-(a+s);
    printf("%d %d %d",a,s,x);
    asterisco(matriz,a);
    soma(matriz,s);
    mult(matriz,x);
}

void funcao5(char matriz[20][80]) {
    int x, y;

    while (1) {
        y = 1 + rand() % 72;
        x = 1 + rand() % 13;
        if (matriz[x + 6][y - 3] == ' ' && matriz[x + 6][y - 2] == ' ' && matriz[x + 6][y - 1] == ' ' &&
            matriz[x + 6][y] == ' ' && matriz[x + 6][y + 2] == ' ' && matriz[x + 6][y + 3] == ' ' &&
            matriz[x + 6][y + 4] == ' ' && matriz[x + 6][y + 5] == ' ' && matriz[x][y] == ' ' &&
            matriz[x][y - 1] == ' ' && matriz[x][y + 1] == ' ' && matriz[x][y + 2] == ' ' &&
            matriz[x + 1][y - 2] == ' ' && matriz[x + 1][y + 3] == ' ' && matriz[x + 2][y - 3] &&
            matriz[x + 2][y + 4] == ' ' && matriz[x + 2][y - 1] == ' ' && matriz[x + 2][y] == ' ' &&
            matriz[x + 2][y + 1] == ' ' && matriz[x + 2][y + 2] == ' ' && matriz[x + 3][y - 2] == ' ' &&
            matriz[x + 3][y + 3] == ' ' && matriz[x + 3][y] == ' ' && matriz[x + 4][y + 2] == ' ' &&
            matriz[x + 4][y + 1] == ' ' && matriz[x + 4][y] == ' ' && matriz[x + 4][y - 1] == ' ' &&
            matriz[x + 5][y + 1] == ' ' && matriz[x + 5][y] == ' ' && matriz[x + 5][y - 1] == ' ' &&
            matriz[x + 5][y + 2] == ' ')
            break;
    }
        matriz[x + 6][y - 3] = 'G';
        matriz[x + 6][y - 2] = 'A';
        matriz[x + 6][y - 1] = 'M';
        matriz[x + 6][y] = 'E';
        matriz[x + 6][y + 2] = 'O';
        matriz[x + 6][y + 3] = 'V';
        matriz[x + 6][y + 4] = 'E';
        matriz[x + 6][y + 5] = 'R';
        matriz[x][y] = '_';
        matriz[x][y - 1] = '_';
        matriz[x][y + 1] = '_';
        matriz[x][y + 2] = '_';
        matriz[x + 1][y - 2] = '/';
        matriz[x + 1][y + 3] = '\\';
        matriz[x + 2][y - 3] = '|';
        matriz[x + 2][y + 4] = '|';
        matriz[x + 2][y - 1] = '(';
        matriz[x + 2][y] = ')';
        matriz[x + 2][y + 1] = '(';
        matriz[x + 2][y + 2] = ')';
        matriz[x + 3][y - 2] = '\\';
        matriz[x + 3][y + 3] = '/';
        matriz[x + 3][y] = '^';
        matriz[x + 4][y + 2] = '|';
        matriz[x + 4][y + 1] = '|';
        matriz[x + 4][y] = '|';
        matriz[x + 4][y - 1] = '|';
        matriz[x + 5][y + 1] = '|';
        matriz[x + 5][y] = '|';
        matriz[x + 5][y - 1] = '|';
        matriz[x + 5][y + 2] = '|';
    }
