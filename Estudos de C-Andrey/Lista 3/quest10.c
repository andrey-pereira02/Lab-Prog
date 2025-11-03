#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LAR 3
#define ALT 3

int main(){
    int matriz[LAR][ALT];
    int x;
    int cont = 0;
    srand(time(NULL));

    for(int i=0;i<LAR;i++){
        for(int k = 0;k<ALT;k++){
            matriz[i][k] = rand() % 11;
            printf("Elemento [%d][%d]: %d \n",i,k,matriz[i][k]);
        }
    }
    puts("Digite um valor entre 0 a 10 para ver se tem na matriz pfv burro: ");
    scanf("%d",&x);
    
    for(int i=0;i<LAR;i++){
        for(int k = 0;k<ALT;k++){
            if(matriz[i][k] == x)
             cont++;
        }
    }
    printf("O numero %d esta %d vezes no lab\n",x,cont);

    return 0;
}