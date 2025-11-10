#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    printf("Digite o tamanho da matriz : ");
    scanf("%d", &N);
    
    int matriz[N][N];
    int soma = 0;
    
    srand(time(NULL));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 100;
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
            if (i == j) 
             soma += matriz[i][j];
        }
        printf("\n");
    }
    
    printf("Somatorio da diagonal principal = %d\n", soma);
    
    if (soma % 2 == 0)
        printf("O somatorio e par.\n");
    else
        printf("O somatorio e impar.\n");
    
    return 0;
}
