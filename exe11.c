#include <stdlib.h>
#include <stdio.h>



int main(){
    int i,j;
    int cod[]={};
    int peca[]={};
    int qtdPecas;
    int numPecas;
    float valorPeca[]={};
    float valorTotal;
    printf("Quantas pecas deseja cadastrar?\n");
    scanf("%d",&qtdPecas);

    for(i=0;i<qtdPecas;i++){
        printf("Digite o codigo da peca %d:",(i));
        scanf("%d",&cod[i]);
        printf("Digite o num de pecas de codigo \"%d\":\n",cod[i]);
        scanf("%d",&numPecas);
        for(j=0;j<numPecas;j++){
            printf("Digite o preco da %d. peca\n",j);
            scanf("%f",&valorPeca[j]);
            valorTotal+=valorPeca[j];
        }
    }
   
    for(i=0;i<qtdPecas;i++){
        printf("\nVALOR A PAGAR DA PECA DE COD. %d: %.2f",cod[i],valorTotal);
    }
   
    return 0;
}