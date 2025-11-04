//Escreva um programa que adicione dois números usando ponteiros. Além do valor da soma, imprima
//também o endereço de memória onde o valor resultante dessa soma está armazenado.
#include <stdio.h>

int main(){
    int valor1,valor2,soma;
    int *p = &valor1;
    int *m = &valor2;
    int *s = &soma;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", p);
    
    printf("Digite o segundo valor: ");
    scanf("%d", m);
    
    *s = *p + *m;

    printf("A soma é %d\n",*s);

    

    return 0;
}