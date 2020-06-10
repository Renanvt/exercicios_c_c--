#include <stdlib.h>
#include <stdio.h>

int main(){
    /*Com base na tabela de preços ao lado, faça
um programa que leia o código de um item e a
quantidade deste item. A seguir, calcule e
mostre o valor da conta a pagar.
    CÓDIGO      ESPECIFICACAO     PRECO
    1           Cachorro Quente   R$4,00 
    2           X-Salada          R$4,50
    3           X-Bacon           R$5,00
    4           Torrada simples   R$2,00
    5           Refrigerante      R$1,50     
*/
    int cod,qtd;
    float valAPagar;
    printf("Informe o codigo de um item, em seguida informe a quantidade:\n");
    scanf("%d %d",&cod,&qtd);
    if(cod == 1){
        //Cachorro Quente
        valAPagar= (float) 4.00*qtd;
    }else if(cod == 2){
        //x-Salada
        valAPagar= (float) 4.50*qtd;
    }else if(cod == 3){
        //X-Bacon
        valAPagar= (float) 5.00*qtd;
    }else if(cod == 4){
        //Torrada simples
        valAPagar= (float) 2.00*qtd;
    }else if(cod == 5){
        //Refrigerante
        valAPagar= (float) 1.50*qtd;
    }else{
        printf("Digite um código válido: (1 a 5)");
    }
    printf("Total: %.2f",valAPagar);
    return 0;
}