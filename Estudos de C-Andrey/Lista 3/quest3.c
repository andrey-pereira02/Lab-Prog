#include <stdio.h>
#include <string.h>
#define TAM 100
int main(){
    char str[TAM];
    int cont = 0;
    int i = 0;
    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';

    while(str != '\0'){
        cont++;
        i++;
    }
    printf("A string possui %d caracteres.\n", cont);
    return 0;
}