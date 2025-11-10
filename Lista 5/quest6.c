#include <stdio.h>
#include <math.h>

float erroMedioQuadratico(float A[], float B[], int n) {
    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += pow(A[i] - B[i], 2);
    }
    return soma / n;
}

int main() {
    int n = 5;
    float A[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float B[] = {1.1, 1.9, 3.2, 3.8, 5.1};
    float erro = erroMedioQuadratico(A, B, n);
    printf("Erro medio quadratico = %.4f\n", erro);
    return 0;
}
