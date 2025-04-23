#include<stdio.h>

int main(){

    int notas[5];

    notas[0] = 1;
    notas[1] = 2;
    notas[2] = 3;
    notas[3] = 4;
    notas[4] = 5;

    for (int n = 0; n < 5; n++){
        printf("notas[%d]: %d.\n", n, notas[n]);
    }





    return 0;
}
