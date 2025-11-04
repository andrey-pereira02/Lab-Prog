#include <stdio.h>
#include <string.h>
#define TAM 30

int main(){
    char frase[TAM];
    char texto[TAM];
    char *p;
    p = frase;
    char *m;
    m = texto;
    int i=0,j=0;

    printf("Digite um frase: ");
    fgets(frase,TAM,stdin);

    printf("Digite um frase: ");
    fgets(texto,TAM,stdin);

    frase[strcspn(frase, "\n")] = '\0';
    texto[strcspn(texto, "\n")] = '\0';

    while(*(p + i) != '\0'){
        i++;
    }
    while(*(m + j) != '\0'){
        *(p + i + j) = *(m + j);
        j++;
    }

    *(p + i + j) = '\0';

    printf("A concatenação de duas strings é %s \n",p);

    return 0;
}