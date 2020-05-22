#include <stdlib.h>
#include <stdio.h>

int main(){
      /*Dados n e dois números inteiros positivos i e j diferentes de 0, imprimir em ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.
     Exemplo: Para n = 6 , i = 2 e j = 3 a saída deverá ser : 0,2,3,4,6,8. */

    int i,j;
    int num;
    int cont;
    int multi=0,multj=0;
  
    printf("Entre com o numero de multiplos a serem impressos: ");
    scanf("%d",&num);
    printf("Entre com um número positivo diferente de 0");
    scanf("%d",&i);
    printf("Entre com outro número positivo diferente de 0");
    scanf("%d",&j);

    printf("Os %d primeiros multiplos de %d ou de %d são:\n",num,i,j);
    for(cont=0;cont<num;cont++){
        if(multi < multj){
            printf("%d - ",multi);
            multi+=i;
        }else{
            printf("%d - ",multj);
            if(multi == multj){
                multi+=i;
            }
            multj+=j;
        }
    }
    return 0;
}