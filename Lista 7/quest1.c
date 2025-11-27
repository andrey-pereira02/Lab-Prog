#include <stdio.h>

struct Aluno{
    int n1;
    int n2;
    float media;
};

int main(int argc, char const *argv[])
{
    struct Aluno a1;

    puts("Digite a nota n1 do aluno: ");
    scanf("%d",&a1.n1);

    puts("Digite a nota da n2: ");
    scanf("%d",&a1.n2);

    a1.media = (float)(a1.n1 + a1.n2) / 2;
    printf("A media do aluno é: %.2f\n",a1.media);
    return 0;
}
