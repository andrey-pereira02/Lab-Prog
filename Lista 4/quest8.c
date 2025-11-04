#include <stdio.h>
#include <string.h>
#define TAM 30

int main(){
    char frase[TAM];
    char *p = frase;
    char usuario;
    char *m = &usuario;
    int encontrado =0;

    printf("Digite um frase: ");
    fgets(frase,TAM,stdin);
    // int cont = strlen(frase);

    printf("Digite um caractere para procurar numa string: ");
    scanf("%c",m);

    int i = 0;
    while(*(p + i) != '\0'){
        if(*(p + i) == *m){
         encontrado = 1;
         break;
        }
        i++;
    }

    if (encontrado) {
        printf("O caractere está na string.\n");
    } else {
        printf("O caractere NÃO está na string.\n");
    }
    



    return 0;
}