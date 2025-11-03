#include <stdio.h>
#include <stdlib.h>
#define TAM 100

int ordenacaoSelecao(int *,int ,int);
int odernacaoBolha(int *,int ,int);

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
    ordenacaoBolha(vetor,aux,TAM);

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

int ordenacaoBolha(int *ve,int aju,int tamanho){
    int flag = 1;
    int cont = 0;
    int temp;

    for(int k=0;k<TAM;k++){
        flag = 1;

        for(int j=0;j<TAM - 1;j++){
            if(ve[j]> ve[j + 1]){
                temp = ve[j];
                ve[j] = ve[j + 1];
                ve[j + 1] = temp;
                
                flag = 0;
            }
        }
        if(flag)
         break;
        
        cont++;
    }
    printf("Vetor ordenado: ");
    for (int i = 0; i < TAM; i++)
        printf("%d ", ve[i]);

    printf("\nNumero de passadas: %d\n", cont);

}