#include <stdio.h>
#define TAM 5

int main(){
    int vetor[TAM];
    int *p = vetor;
    int pares[TAM];
    int *pa = pares;
    int cont = 0;

    for(int k=0;k<TAM;k++){
        printf("Digite um valor para v[%d]: ",(k + 1));
        scanf("%d",(p + k));
    }

    for(int i=0;i<TAM;i++){
        if(*(p + i) % 2 == 0){
             *(pa + cont) = *(p + i);
             cont++;
        }
    }
    printf("O primeiro elemento par é :%d e o ultimo é :%d\n",*(pa),*(pa + cont - 1));
    printf("O endereço do primeiro é : %p e o endereço do ultimo é : %p",(void*)(pa),(void*)(pa + cont ));
    return 0;
}