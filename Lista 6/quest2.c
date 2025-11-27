#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Função MSE para INTEGRAR NO PONTEIRO
double mse(int a, int b) {
    double diff = a - b;
    return diff * diff;
}

// Função MAE
double mae(int a, int b) {
    return fabs(a - b);
}

// Função genérica para cálculo do erro
double calcularErro(int *A, int *B, int N, double (*funcErro)(int, int)) {
    double soma = 0.0;
    for (int i = 0; i < N; i++) {
        soma += funcErro(A[i], B[i]);
    }
    return soma / N;
}

int main() {
    int N;

    printf("Digite o tamanho dos vetores A e B: ");
    scanf("%d", &N);

    int *A = malloc(N * sizeof(int));
    int *B = malloc(N * sizeof(int));

    if (!A || !B) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    srand(time(NULL));

    // Preencher vetores com números entre 0 e 100
    for (int i = 0; i < N; i++) {
        A[i] = rand() % 101;
        B[i] = rand() % 101;
    }

    // Exibir vetores
    printf("\nVetor A: ");
    for (int i = 0; i < N; i++) printf("%d ", A[i]);

    printf("\nVetor B: ");
    for (int i = 0; i < N; i++) printf("%d ", B[i]);
    printf("\n");

    // Usar a função genérica com MSE e MAE
    double erroMSE = calcularErro(A, B, N, mse);
    double erroMAE = calcularErro(A, B, N, mae);

    printf("MSE = %.4f\n", erroMSE);
    printf("MAE = %.4f\n", erroMAE);

    free(A);
    free(B);

    return 0;
}
