#include <stdio.h>
#define TAM 10

int main(){
    int vetor[TAM];
    int *p = vetor;

    for(int i=0;i<TAM;i++){
        printf("Digite um valor para o vetor[%d] = ",(i + 1));
        scanf("%d",(p + i));
    }

    for(int k=0;k<TAM;k++){
        printf("vetor[%d] = %d e endereço = %p\n",(k +1),*(p + k),(void *)(p + k));
    }

    return 0;
}