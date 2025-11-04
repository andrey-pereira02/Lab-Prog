#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
#define QTD 25
#define MX 10

int main(){
    int m[TAM][TAM];
    int s[TAM][TAM];
    int *pm = &m[0][0];  
    int *ps = &s[0][0];

    srand(time(NULL));

    for(int i=0;i<QTD;i++){
        *(pm + i) = rand() % MX;
    }
    for(int i=0;i<QTD;i++){
        if(*(pm + i) >= 5)
         *(ps + i) = 1;
        else 
         *(ps + i) = 0;
    }
    printf("Matriz m:\n");
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz s:\n");
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}