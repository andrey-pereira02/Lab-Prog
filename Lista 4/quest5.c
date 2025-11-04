#include <stdio.h>
#include <string.h>
#define TAM 30
int main(){
    char frase[TAM];
    char *p = frase;
    int i = 0,cont = 0;

    printf("Digite um frase de até 30 carcateres: ");
    fgets(frase,TAM,stdin);
    frase[strcspn(frase,"\n")] = '\0';

    while(*(p + i) != '\0'){
        cont++;
        i++;
    }
    printf("O tamanho da string é de %d caracteres\n",cont);
    return 0;
}