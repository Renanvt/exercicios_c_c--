#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define PI 3.14159
/*Faça um programa para ler o valor do raio de um círculo, e depois mostrar o valor da área deste círculo com quatro
casas decimais conforme exemplos.
Fórmula:  = .
Considere o valor de π = 3.14159*/
int main(){
    float r;
    float area;
    printf("Digite o raio do circulo:\n");
    scanf("%f",&r);
    area = (float) PI*(pow(r,2));
    printf("AREA DO CIRCULO: %.4f",area);
    return 0;
}