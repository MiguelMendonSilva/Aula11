#include<stdio.h>
#define TAMANHO 4


int main(){

    float notas[4];
    float total = 0;

   printf("Digite a primeira nota: ");
   scanf("%f", &notas[0]);
   printf("Digite a segunda nota: ");
   scanf("%f", &notas[1]);
   printf("Digite a terceira nota: ");
   scanf("%f", &notas[2]);
   printf("Digite a quarta nota: ");
   scanf("%f", &notas[3]);

    for(int n = 0; n < TAMANHO; n++){
        total += notas[n];
    }

    printf("A soma é: %.2f\n", total);

    return 0;
}