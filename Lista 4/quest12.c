#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

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
        // *(py + i) = rand() % TAM;
        if(0 <*(px + i) <= 3)
         *(py + i) =  *(px + i);
        if( 3 < *(px + i) <= 5 )
         *(py + i) =  *(px + i) - 1;
        if( 5 < *(px + i) <= 7)
         *(py + i) =  *(px + i) + 1;
        if( 7 < *(px + i) <= 9)
         *(py + i) =  *(px + i) - 2;
        if(9 < *(px + i) <= 10)
         *(py + i) =  *(px + i) + 2;
        
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