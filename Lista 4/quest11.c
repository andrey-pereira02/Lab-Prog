// Escreva um programa que gere dois vetores (X e Y ) com números pseudoaleatórios no intervalo
// [0,N − 1]. Crie uma matriz M com dimensões NxN que armazene as coocorrências dos elementos
// de X e Y da seguinte forma:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int main(){
    int x[TAM];
    int *px = x;
    int y[TAM];
    int *py = y;
    int matriz[TAM][TAM] = {0};
    int (*m)[TAM] = matriz;
    
    srand(time(NULL));

    for(int i = 0;i<TAM;i++){
        *(px + i) = rand() % TAM;
        *(py + i) = rand() % TAM;
    }

    for(int i=0;i<TAM;i++){
          (*(*(m + *(px + i)) + *(py + i)))++;
    }
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%4d ", *(*(m + i) + j));
        }
    }

    return 0;
}