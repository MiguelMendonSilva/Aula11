#include<stdio.h>

int main(){

    int notas[5] = {1, 2, 3, 4, 5};

    for (int n = 0; n < 5; n++){
        printf("notas[%d]: %d.\n", n, notas[n]);
    }


    return 0;
}
