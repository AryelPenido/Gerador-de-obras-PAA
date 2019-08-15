#include <stdio.h>
#include "quadro.h"
#include <stdlib.h>
#include <time.h>
int main() {
    int qtde, fig, r = 3;
    char matriz[20][80];
    puts("PROGRAMA DE GERADOR DE OBRA DE ARTE:");
    puts("=====================================");
    puts("Escolha o tipo de figura basica a ser usada para criar a obra:");
    puts("1-asterisco simples.");
    puts("2-simbolo de soma com asteriscos.");
    puts("3-letra X com asteriscos.");
    puts("4-figuras aleatorias");
    puts("5- obra de arte criada pelo aluno.");
    printf("Digite o tipo de figura basica:");
    scanf("%d", &fig);
    printf("Digite a quantidade de figuras(menor ou iguala zero para aleatorio):");
    scanf("%d", &qtde);
    srand(time(NULL));
    if(qtde<1)
        qtde=1+rand()%100;
    IniciaMatriz(matriz);
    if (fig == 1){
        asterisco(matriz, qtde);
        ImprimeMatriz(matriz);

    }

    if (fig == 2){
        soma(matriz, qtde);
        ImprimeMatriz(matriz);
    }

    if (fig == 3){
        mult(matriz, qtde);
        ImprimeMatriz(matriz);
    }
    if(fig != 1 && fig!=2 && fig!=3 && fig!=5){
        Aleatorio(matriz,qtde);
        ImprimeMatriz(matriz);
    }

    if(fig == 5){
        funcao5(matriz);
        ImprimeMatriz(matriz);
    }


    printf("\nDeseja criar um novo quadro(Sim -> 1 ou Nao -> 0)?");
    scanf("%d", &r);
        if (r == 1) {
            IniciaMatriz(matriz);
            if (fig == 1) {
                asterisco(matriz, qtde);
                ImprimeMatriz(matriz);
            }

            if (fig == 2) {
                soma(matriz, qtde);
                ImprimeMatriz(matriz);
            }

            if (fig == 3) {
                mult(matriz, qtde);
                ImprimeMatriz(matriz);
            }
            if(fig == 4){
                Aleatorio(matriz,qtde);
                ImprimeMatriz(matriz);
            }
            if(fig == 5){
                funcao5(matriz);
                ImprimeMatriz(matriz);
            }
        }
        r=3;

            puts("\nFim");

        if(r==0 || r!=1) {
        printf("Fim");
    }

    printf("\nEncerrado");
    return 0;

}

