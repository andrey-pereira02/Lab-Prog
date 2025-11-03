#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
float maiormenor(float *v, float *me, float *ma, int tamanho){
    *me= v[0];
    *ma=v[0];

    for (int i =0; i < tamanho; i++){
        if ( v[i] < *me)
         *me = v[i];
        if (v[i] > *ma)
         *ma = v[i];
    }
    printf("O menor %.2f  e o Maior é %.2f\n",*me,*ma);
    float soma = *me + *ma;
    printf("A soma dos dois é %.2f",soma);

}
int main(){
    float vetor[TAM];
    float maior,menor;
    srand(time(NULL));

    for(int i=0;i <TAM; i++){
        vetor[i] = ((float) rand()/ RAND_MAX) * 10;
    }

    for(int i=0;i < TAM; i++){
        printf("%.2f \n",vetor[i]);
    }
    maiormenor(vetor, &menor,&maior,TAM);
    
    return 0;
}