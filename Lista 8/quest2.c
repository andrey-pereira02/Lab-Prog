#include <stdio.h>
#define TAM 100
#include <string.h>

int remover_linha(const char *, int);
int atualizar_linha(const char *, int, const char *);

int main(int argc, char const *argv[])
{
    FILE *fp;
    fp = fopen("harware.dat", "a+");
    unsigned char registro = 1;
    char nome[100];
    int quantidade;
    double custo;
    unsigned char escolha;

    do
    {
        puts("Digite: 1- Adicionar algo ao registo ; 2 - Para atualizar um registo ; 3 - Remover um registo");
        scanf("%d", &escolha);

        if (escolha == 1)
        {

            puts("Digite o nome da ferramenta: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0';

            printf("Digite quantas %s possui no estoque: \n", nome);
            scanf("%d", &quantidade);
            getchar();

            printf("Digite o custo de %s: \n", nome);
            scanf("%lf", &custo);
            getchar();

            fprintf(fp, "# %s - %d - %.2lf \n", nome, quantidade, custo);

            if (custo == -1)
            {
                puts("Comando para sair aceito");
                return 1;
            }
            registro++;
        }

        if (escolha == 2)
        {
            int linha;
            puts("Digite a linha que vc quer remover: ");
            scanf("%d", &linha);
            getchar();

            if (remover_linha("harware.dat", linha))
            {
                printf("Registro removido com sucesso!\n");
            }
            else
            {
                printf("Erro ao remover registro.\n");
            }
        }

        if (escolha == 3)
        {
            int linha;
            char nova_nome[100];
            int nova_quantidade;
            double novo_custo;

            printf("Digite o número da linha que deseja atualizar: ");
            scanf("%d", &linha);
            getchar();

            printf("Digite o novo nome: ");
            fgets(nova_nome, sizeof(nova_nome), stdin);
            nova_nome[strcspn(nova_nome, "\n")] = '\0';

            printf("Digite a nova quantidade: ");
            scanf("%d", &nova_quantidade);
            getchar();

            printf("Digite o novo custo: ");
            scanf("%lf", &novo_custo);
            getchar();

            char nova_linha[256];
            sprintf(nova_linha, "# %s - %d - %.2lf", nova_nome, nova_quantidade, novo_custo);

            if (atualizar_linha("harware.dat", linha, nova_linha))
            {
                printf("Registro atualizado com sucesso!\n");
            }
            else
            {
                printf("Erro ao atualizar registro.\n");
            }
        }

    } while (registro != 100);

    fclose(fp);

    return 0;
}

int remover_linha(const char *arquivo, int linha_remover)
{
    FILE *orig = fopen(arquivo, "r");
    if (!orig)
    {
        return 0;
    }

    FILE *temp = fopen("temp.dat", "w");
    if (!temp)
    {
        fclose(orig);
        return 0;
    }

    char buffer[256];
    int linha_atual = 1;

    while (fgets(buffer, sizeof(buffer), orig))
    {
        if (linha_atual != linha_remover)
        {
            fputs(buffer, temp);
        }
        linha_atual++;
    }

    fclose(orig);
    fclose(temp);

    remove(arquivo);
    rename("temp.dat", arquivo);

    return 1;
}

int atualizar_linha(const char *arquivo, int linha_atualizar, const char *nova_linha)
{
    FILE *orig = fopen(arquivo, "r");
    if (!orig)
        return 0;

    FILE *temp = fopen("temp.dat", "w");
    if (!temp)
    {
        fclose(orig);
        return 0;
    }

    char buffer[256];
    int linha = 1;

    while (fgets(buffer, sizeof(buffer), orig))
    {
        if (linha == linha_atualizar)
        {
            fputs(nova_linha, temp); // escreve a nova linha
            fputc('\n', temp);       // adiciona quebra de linha
        }
        else
        {
            fputs(buffer, temp); // escreve a linha original
        }
        linha++;
    }

    fclose(orig);
    fclose(temp);

    remove(arquivo);
    rename("temp.dat", arquivo);

    return 1;
}
