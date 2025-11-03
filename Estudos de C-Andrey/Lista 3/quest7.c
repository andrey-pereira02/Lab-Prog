#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 3

float mediaAritmetica(float *,int tamanho);
float mediaGeometrica(float *,int tamanho);

int main(){
    float vetor[3];
    srand(time(NULL));
    
    for(int i = 0; i < TAM;i++){
        vetor[i] = rand() % 20;
        printf("vetor[%d] = %.2f\n",(i + 1),vetor[i]);
    }

    mediaAritmetica(vetor,TAM);

    mediaGeometrica(vetor,TAM);

    return 0;
}

float mediaAritmetica(float *p,int tamanho){
    float media = 0;
    
    for(int i=0;i < tamanho;i++){
     media += *(p + i);
    }
    media /= tamanho;
    
    printf("A media artimetica é %.2f\n",media);

    return media;
}

float mediaGeometrica(float *m,int tamanho){
    float med = 1;

    for(int i=0; i<tamanho;i++){
        med *= *(m + i);
    }
    med = pow(med,1.0/tamanho);
    printf("A media geometrica é %.2f\n",med);
    return med;
}