#include <stdio.h>
#include <string.h>
#define TAM 30
int main(){
    char frase[30];
    char texto[30];
    int i = 0,j = 0;

    printf("Escreva uma frase: ");
    fgets(frase,TAM,stdin);

    printf("Escreva uma frase: ");
    fgets(texto,TAM,stdin);

    frase[strcspn(frase, "\n")] = '\0';
    texto[strcspn(texto, "\n")] = '\0';

    while(frase[i] != '\0'){
        i++;
    }

    while(texto[j] != '\0'){
       frase[i + j] = texto[j];
       j++;
    }

    frase[i + j] = '\0';

    printf("A concatenação de duas strings é %s",frase);


    return 0;
}