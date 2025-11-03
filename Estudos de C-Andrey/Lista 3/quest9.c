#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LAR 3
#define ALT 3
int main(){
    int matriz[LAR][ALT];
    srand(time(NULL));

    for(int i=0;i<LAR;i++){
        for(int k = 0;k<ALT;k++){
            matriz[i][k] = rand() % 50;
            printf("Elemento [%d][%d]: %d \n",i,k,matriz[i][k]);
        }
    }
    
    for(int i=0;i<LAR;i++){
        for(int k=0;k<ALT;k++){
          if(i == k){
            printf("Os elemetos da diagonal principal da matriz são %d\n",matriz[i][k]);
          }  
        }
    }

    return 0;
}