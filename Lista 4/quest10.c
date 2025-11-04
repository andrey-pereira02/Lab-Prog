//  Escreva um programa que gere um vetor X com números pseudoaleat´orios no intervalo [0,N − 1].
// Crie um vetor F com N posições e armazene em cada posi¸c˜ao de F a quantidade de ocorrencias
// dos elementos de X.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main(){
    int vetor[TAM];
    int *p = vetor;
    int frequencia[TAM] = {0};
    int *f = frequencia;

    srand(time(NULL));

    for(int i=0;i<TAM;i++){
        *(p + i) = rand() % 10;
        printf("vetor x = %d\n",*(p + i));
    }

    for(int i=0;i<TAM;i++){
        (*(f + *(p + i)))++;
    }

    for(int i=0;i<TAM;i++){
        printf("F[%d] = %d\n",i,*(f + i));
    }

    
    return 0;
}