#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]){
    int linhas;
    int colunas;
    srand(time(NULL));

    puts("Digite o numero de linhas que vc quer na matriz: ");
    scanf("%d",&linhas);

    puts("Digite a quantidade de colunas que vc quer: ");
    scanf("%d",&colunas);

    // int matriz[linhas][colunas];
    // int *m = matriz;

    int *m = calloc(linhas * colunas,sizeof(int));

    for(int i=0;i<linhas;i++){
        for(int k=0;k<colunas;k++){
            *((m + i) + k) = rand() % 50;
        }
    }

    for(int i=0;i<linhas;i++){
        for(int k=0;k<colunas;k++){
            printf(" %d ",*((m + i) + k));
        }
        printf("\n");
    }

    int soma =0;

    for(int i=0;i<linhas;i++){
        for(int k=0;k<colunas;k++){
            soma += *((m + i) + k);
        }
    }

    double media = soma / (linhas * colunas);
    printf("A media é %.2f \n",media);

    return 0;
}
