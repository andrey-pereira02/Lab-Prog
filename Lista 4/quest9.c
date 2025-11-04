#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main(){
    int vetor[TAM];
    int *p = vetor;
    int flag;
    int aux;

    srand(time(NULL));

    for(int i=0;i<TAM;i++){
        *(p + i) = rand() % 100;
    }

    for(int i=0;i<TAM - 1;i++){

        for(int k = 0; k<TAM - i - 1;k++){
            if(*(p + k) > *(p + k + 1)){
                aux = *(p + k);
                *(p + k) = *(p + k + 1);
                *(p + k + 1) = aux;

            }
        }
    }
    printf("Vetor ordenado: ");
    for (int i = 0; i < TAM; i++){
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}