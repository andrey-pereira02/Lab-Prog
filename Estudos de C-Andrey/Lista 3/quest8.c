#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int ordenacaoSelecao(int *,int ,int);
int odernaçaoBolha(int *,int ,int);

int main(){
    int usuario;
    int aux;
    int vetor[TAM];

    puts("Digite um numero limite que vc quer que seja impresso num vetor:");
    scanf("%d",&usuario);

    for (int i = 0; i<TAM;i++){
        vetor[i] = rand() % (usuario + 1);
    }

    ordenacaoSelecao(vetor,aux,TAM);
    //ordenaçãoBolha(vetor,aux,TAM);

    return 0;
}

int ordenacaoSelecao(int *v,int ajuda,int tamanho){
    for(int k =0;k < TAM - 1;k++){
        for(int j = k + 1; j < TAM;j++)
         if(v[k] > v[j]){
            ajuda= v[k];
            v[k] = v[j];
            v[j] = ajuda;
         }
    }
    for(int i = 0;i < TAM;i++){
        printf("O v[%d] = %d\n",(i + 1),v[i]);
    }
    return *v;
}
