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
    int cont=0;
    int i =0;

    printf("Digite um frase de até 30 carcateres: ");
    fgets(frase,TAM,stdin);

    frase[strcspn(frase,"\n")] = '\0';

    while(*(p + i) != '\0'){
        cont++;
        i++;
    }

    for(int k=0;k<cont;k++){
        *(m  + k) = *(p + k);
    }

    printf("A string texto é: %s\n", m);
    return 0;
}