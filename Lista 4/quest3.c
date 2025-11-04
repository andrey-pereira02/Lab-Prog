#include <stdio.h>
#define TAM 10

int main(){
    int vetor[TAM];
    int *p = vetor;
    int i = 0;
    int aux;

    while(*(p + i) != 999){
        puts("Digite um valor(no minino 10 vezes): ");
        scanf("%d",(p + i));

        if(*(p + i) == 999){
            break;
        }
        
        if(*p > *(p + i)){
            aux = *p;
            *p = *(p + i);
            *(p + i) = aux;
        }
        i++;
    }

    for(int k =0;k < TAM;k++){
            printf("O vetor[%d] = %d\n",(k+1),*(p + k));
        }

    return 0;
}