#include<stdio.h>
#define PI 3.14159

int main(){

    float raio;
    float area;
    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = PI * (raio * raio);
    printf("A área do circulo é: %f\n", area);

    

    return 0;
}