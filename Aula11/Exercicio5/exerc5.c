#include <stdio.h>
//Exercicio 6

float media(float numeros[2]){
    return (numeros[0] + numeros[1])/2;
}
//

//Exercicio 7

float dobro(float numeros[2]){
    numeros[0] *= 2.0;
    numeros[1] *= 2.0;
    return  (numeros[0] + numeros[1])/2;

}
//

// Exercicio 9

float maior(float numeros[2]){
    if (numeros[0] > numeros[1]){
        printf("Depois da função maior(): %.2f, %.2f\n", numeros[0], numeros[1]);
    }else{
        printf("Depois da função maior(): %.2f, %.2f\n", numeros[1], numeros[0]);
    }
    return 0;
}
//

int main(void){

    // Exerciocio 5

    float numeros[2];

    printf("Digite um numero: ");
    scanf("%f", &numeros[0]);

    printf("Digite outro numero: ");
    scanf("%f", &numeros[1]);

    //

    /* Exercicio 8 mostrando os valores antes de calcular a media e depois
    de usar a função dobro */
        printf("Vetor antes de usar a media: %.2f\n%.2f\n", numeros[0], numeros[1]);
        
        float dobrado = dobro(numeros);
        printf("Vetor após usar  dobro: %.2f\n%.2f\n", numeros[0], numeros[1]);

    //    

    // Exercicio 10

        printf("Antes da função maior(): %.2f, %.2f\n", numeros[0], numeros[1]);
        float maiorNumero = maior(numeros);

    // 
        
    return 0;

}


