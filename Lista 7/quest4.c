#include <stdio.h>
#include <stdlib.h>

struct Alunos{
    int *alunos;
    int *n1;
    int *n2;
    double *media;
    int tamanho;
};

int main(int argc, char const *argv[])
{
    struct Alunos al;

    puts("Digite quantos alunos vc quer colocar para calcular a media: ");
    scanf("%d",&al.tamanho);

    al.alunos = calloc(al.tamanho,sizeof(int));
    al.n1 = calloc(al.tamanho,sizeof(int));
    al.n2 = calloc(al.tamanho,sizeof(int));
    al.media = calloc(al.tamanho,sizeof(double));

    for(int i=0;i<al.tamanho;i++){
        printf("Digite a nota do aluno[%d].n1: ",i + 1);
        scanf("%d",(al.n1 + i));

        printf("Digite a nota do aluno[%d].n2: ",i + 1);
        scanf("%d",(al.n2 + i));

        *(al.media + i) = (*(al.n1 + i) + *(al.n2 + i)) / 2.0;
    }

    for(int i=0;i<al.tamanho;i++){
        printf("ALUNO[%d]: \n", i + 1);
        printf("\tAluno[%d].n1: %d \n",i + 1, *(al.n1 + i));
        printf("\tAluno[%d].n2: %d \n", i + 1,*(al.n2 + i));
    }

    free(al.alunos);
    free(al.n1);
    free(al.n2);
    free(al.media);

    return 0;
}
