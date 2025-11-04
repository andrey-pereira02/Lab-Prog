#include <stdio.h>
#define TAM 5
int getMaior(int *,int);
int getMenor(int *,int);

int main(){
    int vetor[TAM];
    int *v = vetor;
    int maior,menor;

    
    for(int i = 0; i < TAM; i++) {
        printf("Digite vetor[%d]: ", (i + 1));
        scanf("%d", v + i);
    }
    
    maior = getMaior(v, TAM);
    menor = getMenor(v, TAM);

    for(int i=0;i<TAM;i++){
        float normalizado = (float)(*(v + i) - menor)/ (maior - menor );
        printf("%.2f\n",normalizado);
    }

    return 0;
}

int getMaior(int *p,int tamanho){
    int ma;
    ma = *p;

    for(int i=0;i<tamanho;i++){
        if(*(p + i) > ma)
         ma = *(p + i);
    }
    printf("O maior é %d\n",ma);

    return ma;
}

int getMenor(int *m,int tamanho){
    int me;
    me = *m;

    for(int i=0;i<tamanho;i++){
        if(*(m + i) < me)
         me = *(m + i);
    }

    printf("O menor é %d\n",me);

    return me;
}
