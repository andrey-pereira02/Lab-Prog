#include <stdio.h>
#define TAM 5

int main(){
    int vetor[TAM];
    int *p = vetor;
    
    for(int k=0;k<TAM;k++){
        printf("Digite um valor para v[%d]: ",k);
        scanf("%d",(p + k));
    }

    for(int i=0;i<TAM;i++){
        if(*(p + i) % 2 == 0){
         printf("O primeiro elemento para do vetor é: %d",*(p + i));
         break;
        }
    }

    return 0;
}