#include <stdlib.h>
#include <stdio.h>

int main(){
    int num;
    long int fat=1;
    int i;
    /*Dado um inteiro não-negativo n, determinar n!*/
    //4*3*2*1
    printf("Entre com um número não negativo:\n");
    scanf("%d",&num);
    for(i=num;i>0;i--){
        fat*=i;
    }
    printf("%d! = %ld",num,fat);
    return 0;
}