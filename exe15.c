#include <stdlib.h>
#include <stdio.h>
/*Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando
essas informações conforme exemplo (use a palavra "in" para dentro do intervalo, e "out" para fora do intervalo).*/
int main(){
    int num[6];
    int cont;
    int in=0;
    int out=0;
    printf("Digite 6 numeros:\n");
    
    for(cont=0;cont<6;cont++){
        scanf("%d",&num[cont]);
    }
    
    for(cont=0;cont<6;cont++){
        if(num[cont]<10 || num[cont]>20){
            out++;
        }else if(num[cont]>=10 && num[cont]<=20){
            in++;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}