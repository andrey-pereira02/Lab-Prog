#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    fp = fopen("registos.csv","a+");
    char nome[100];
    int idade;
    int quant_usuarios;

    puts("Digite quantos registros terão: ");
    scanf("%d",&quant_usuarios);
    getchar();


    for(int i =0;i<quant_usuarios;i++){

        puts("Digite seu nome para colocar no registro: ");
        fgets(nome,sizeof(nome),stdin);
        nome[strcspn(nome, "\n")] = '\0';

        puts("Digite sua idade para colocar num arquivo: ");
        scanf("%d",&idade);
        getchar();
        
        fprintf(fp, "%s ; %d \n",nome,idade);

        nome[500] = 0;
        idade = 0;
    }

    fclose(fp);

    return 0;
}
