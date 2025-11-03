#include <stdio.h>
#include <string.h>
#define TAM 30
int main(){
    char texto[TAM];
    char texto2[TAM];
    int i = 0;

    printf("Digite uma frase: ");
    fgets(texto,TAM,stdin);

    printf("Digite outra frase: ");
    fgets(texto2,TAM,stdin);

    //if(strcmp(texto,texto2) == 0)
    // printf("As frases são iguais");
    //else
    // printf("As frases não são iguais");
    texto[strcspn(texto,"\n")] = '\0';
    texto2[strcspn(texto2,"\n")] = '\0';
    
    while(texto[i] != '\0' && texto2[i] != '\0' && texto[i] == texto2[i]){
        i++;
    }
    if(texto[i] == '\0' && texto2[i] == '\0')
     printf("As strings são iguais\n");
    else
     printf("As strings não são iguais\n");
    

    return 0;
}