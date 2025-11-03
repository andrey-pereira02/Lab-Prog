#include <stdio.h>
#define TAM 30

int main(){
    char frase[TAM];
    char caractere;
    int encontrado = 0;

    printf("Digite uma frase: ");
    fgets(frase, TAM , stdin);

    printf("Digite um caractere para verificar se tem na string: ");
    scanf(" %c",&caractere);

    for(int i=0;i < sizeof(frase);i++){
        if (frase[i] == caractere)
         encontrado += 1;
    }

    printf("%d encontrados",encontrado);

    return 0;
}