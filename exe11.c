#include <stdlib.h>
#include <stdio.h>

/*Fazer um programa para ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o
código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Calcule e mostre o valor a ser pago.
*/

int main(){
    int cod,numPecas;
    float valorPeca,valorPeca2;
    int cod2,numPecas2;    
    float valorTotal;

    printf("Entre com o codigo, num de pecas, valor da peca\n");
    scanf("%d %d %f",&cod,&numPecas,&valorPeca);
    printf("Entre com o codigo, num de pecas, valor da peca\n");
    scanf("%d %d %f",&cod2,&numPecas2,&valorPeca2);
    valorTotal=(valorPeca*numPecas)+(valorPeca2*numPecas2);
    printf("\n VALOR A PAGAR: %.2f", valorTotal);
   
    return 0;
}