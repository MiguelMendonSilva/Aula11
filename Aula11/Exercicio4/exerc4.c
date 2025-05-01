#include <stdio.h>
int main(void){

    float numeros[3];
    float soma = 0;

    for (int n = 0; n < 3; n++){
        printf("Digite um numero: ");
        scanf("%f", &numeros[n]);
        soma += numeros[n];
    }

    printf("A soma dos números é: %2.f\n", soma);


    return 0;

}