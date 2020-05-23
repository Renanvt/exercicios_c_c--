#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*Ler os valores dos três coeficientes "a", "b" e "c" de uma equação do segundo grau ( +  +  = 0)
Em seguida, mostrar os valores das raízes da equação, conforme exemplos, usando a fórmula de Baskara (veja
abaixo). Se a equação não possuir raízes (o valor de "a" não pode ser zero, e o valor de "delta" não pode ser
negativo), mostrar uma mensagem "Impossivel calcular".*/
int main(){
    float a,b,c;
    float x1;
    float x2;
    float delta;
    printf("Informe o coeficiente angular: \n");
    scanf("%f",&a);
    printf("Informe o coeficiente linear: \n");
    scanf("%f",&b);
    printf("Informe o termo independente: \n");
    scanf("%f",&c);
    delta=(float)  ( (b*b)  - (4 * a * c) );
    x1= (float) ( (-b+sqrt(delta)) / (2 * a) );
    x2=  (float) ( (-b-sqrt(delta)) / (2 * a) );
    if(a==0 || delta <0){
        printf("Impossivel calcular\n");
    }else{
        printf("X1 = %.5f\n",x1);
        printf("X2 = %.5f\n",x2);
    }

    return 0;
}