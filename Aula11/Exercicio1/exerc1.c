#include<stdio.h>
#define TAMANHO 5



int main(){

    int notas[5] = {1, 2, 3, 4, 5};

    for (int n = 0; n < TAMANHO; n++){
        printf("x[%d]: %d.\n", n, notas[n]);
    }


    return 0;
}