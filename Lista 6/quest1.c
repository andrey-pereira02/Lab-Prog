#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, T;

    printf("Digite o valor de N (tamanho das categorias 0..N-1): ");
    scanf("%d", &N);

    printf("Digite o tamanho dos vetores X e Y: ");
    scanf("%d", &T);

    int *X = malloc(T * sizeof(int));
    int *Y = malloc(T * sizeof(int));
    int *M = calloc(N * N, sizeof(int));   // matriz N×N zerada

    if (!X || !Y || !M) {
        printf("Erro de alocacao!\n");
        return 1;
    }

    srand(time(NULL));

    // Preencher X e Y com números entre 0 e N-1
    for (int i = 0; i < T; i++) {
        X[i] = rand() % N;
        Y[i] = rand() % N;
    }

    // Construir a matriz de coocorrencia
    for (int i = 0; i < T; i++) {
        int a = X[i];  // linha
        int b = Y[i];  // coluna
        M[a * N + b]++; // incremento da coocorrência
    }

    // Exibir vetores
    printf("\nVetor X: ");
    for (int i = 0; i < T; i++) printf("%d ", X[i]);
    printf("\nVetor Y: ");
    for (int i = 0; i < T; i++) printf("%d ", Y[i]);

    // Exibir matriz
    printf("\n\nMatriz M (%dx%d):\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", M[i * N + j]);
        }
        printf("\n");
    }

    free(X);

    free(Y);

    free(M);
    
    return 0;
}
