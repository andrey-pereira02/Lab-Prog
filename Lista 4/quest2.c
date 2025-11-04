#include <stdio.h>
int trocaValores(int *,int *);

int main(){
    int valor = 10 ,valor2 = 20;
    int *p = &valor;
    int *m = &valor2;

    trocaValores(p,m);

    
    return 0;
}

int trocaValores(int *v1,int *v2){
    int aux = *v1;
    *v1 = *v2;
    *v2 = aux;
    printf("V1: %d e V2: %d\n",*v1,*v2);

    return 0;
}