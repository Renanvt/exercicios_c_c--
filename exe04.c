#include <stdlib.h>
#include <stdio.h>

int main(){
    /*Dados um inteiro x e um inteiro não-negativo n, calcular x^n.*/
    int num=-1;
    int x=-1;
    while(num<0 || x<0){
        printf("Digite um numero inteiro:\n");
        scanf("%d",&x);
        printf("Digite outro inteiro não negativo:\n");
        scanf("%d",&num);
    }
    int quadrado=1;
    for(int i=0;i<num;i++){
        quadrado*=x;
    }

    printf("%d^%d= %d",x,num,quadrado);

    return 0;
}