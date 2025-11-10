#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void somaVetor(float vetor[], int tamanho, float *resultado) {
    *resultado = 0;
    for (int i = 0; i < tamanho; i++) {
        *resultado += vetor[i];
    }
}

int main() {
    float vetor[TAM];
    float soma;
    
    srand(time(NULL));
    
    for (int i = 0; i < TAM; i++) {
        vetor[i] = (float)rand() / RAND_MAX * 100.0;
    }
    
    for (int i = 0; i < TAM; i++) {
        printf("%.2f ", vetor[i]);
    }
    
    somaVetor(vetor, TAM, &soma);
    
    printf("Soma dos elementos = %.2f\n", soma);
    
    return 0;
}
