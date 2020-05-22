#include <stdlib.h>
#include <stdio.h>

int main(){
    /*Dados n e uma seqüência de n números inteiros, determinar a soma dos números pares. */
    int num;
    int i;
    int soma=0;
    printf("Digite um número:\n");
    scanf("%d",&num);
    printf("Sequencia dos numeros até %d\n",num);
    for(i=0;i<num;i++){
        printf("%d - ",i);
    }
    printf("\nSequencia dos numeros pares até %d:\n",num);
    for(i=0;i<=num;i+=2){
        soma+=i;
        printf("%d - ",i);
    }
    printf("\nSoma dos numeros pares até %d:\n %d\n",num,soma);

    return 0;  
    

}