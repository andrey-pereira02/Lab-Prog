#include <stdio.h>
#define TAM 5
getMaior(int *,int tamanho,int maior);
getMenor(int *,int tamanho,int menor);
getNormal(int maior,int menor);

int main(){
    int vetor[TAM];
    int *v = vetor;
    int maior,menor;
    getmaior(v,TAM,maior);
    getMenor(v,TAM,menor);

    for(int i=0;i<TAM;i++){
        
    }

    return 0;
}

int getMaior(int *p,int tamanho,int ma){
    ma = *p;

    for(int i=0;i<TAM;i++){
        if(*(p + i) > ma)
         ma = *(p + i);
    }
    printf("O maior é %d",ma);

    return ma;
}

int getMenor(int *m,int tamanho, int me){
    me = *m;

    for(int i=0;i<TAM;i++){
        if(*(m + i) < me)
         me = *(m + i);
    }

    printf("O menor é %d",me);

    return me;
}
