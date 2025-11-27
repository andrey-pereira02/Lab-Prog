#include <stdio.h>
#include <string.h>

struct Estoque{
    char nomePeca[50];
    int numpeca;
    double preco;
    int pedido;
};

int main(int argc, char const *argv[])
{
    struct Estoque e1;

    while(e1.pedido != 999){
        puts("Digite o nome da peça: ");
        fgets(e1.nomePeca,50,stdin);

        puts("Digite o numero da peça: ");
        scanf("%d",&e1.numpeca);

        puts("Digite o preço da peça: ");
        scanf("%lf",&e1.preco);

        puts("Digite o numero do pedido: ");
        scanf("%d",&e1.pedido);

        int c; while ((c = getchar()) != '\n' && c != EOF);

        printf("O nome da peça é : %s \n",e1.nomePeca);
        printf("Digite o numero da peça: %d \n",e1.numpeca);
        printf("Digite o preço da peça: %.2f \n",e1.preco);
        printf("Digite o numero do pedido: %d \n",e1.pedido);

        memset(e1.nomePeca,0,sizeof(e1.nomePeca));
        
    }

    return 0;
}
