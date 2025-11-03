#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 30

int main(){
    char frase[TAM];
    char reverse[TAM];

    printf("Digite uma frase :");
    fgets(frase,TAM, stdin);

    frase[strcspn(frase,"\n")] = '\0';
    int tamanho = strlen(frase);


    for(int i = 0; i < tamanho;i++){
        reverse[tamanho - i - 1] = frase[i];
    }
    reverse[tamanho] = '\0';
    printf("A frase invesa é %s\n",reverse);

    return 0;
}