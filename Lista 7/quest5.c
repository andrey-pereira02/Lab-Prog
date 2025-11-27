#include <stdio.h>

struct professor{
    int nota;
};

struct Disciplina{
    struct professor pr;
};

int main(int argc, char const *argv[])
{
    struct Disciplina ds;

    puts("Digite a nota da prova: ");
    scanf("%d",&ds.pr.nota);

    printf("A nota é %d \n\n",ds.pr.nota);
    
    return 0;
}
