
#include <stdlib.h>
#include <stdio.h>
int main(){
    int num;
    int impar=0;
    /*Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares. 
    Exemplo: Para n=4 a saída deverá ser 1,3,5,7. 
    */
    printf("Digite um número:\n");
    scanf("%d",&num);
    for(int i=0;i<num+num;i++){
            if(i%2!=0){
                impar=i;
                printf("%d - ",impar);
            }     
    }
   
    return 0;
}