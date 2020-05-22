#include <stdlib.h>
#include <stdio.h>

int main(){
    /*Uma loja de discos anota diariamente durante o mês de março a quantidade de discos vendidos. Determinar em que dia desse mês ocorreu a maior venda e qual foi a quantidade de discos vendida nesse dia.*/
    int marco=2;
    int discosVendidos=0;
    int discosVendidosDiaAtual=0;
    int cont;
    int j;
    int precoTotal=0;
    int precoAtual=0;
    int maiorVenda=0;
    int dia=0;
    int quantDisco=0;
    for(cont=1;cont<=marco;cont++){
         printf("Digite a quantidade de discos vendidos no dia %d em %d de marco de 2020:\n",cont,cont);
         scanf("%d",&quantDisco);
        for(j=1;j<=quantDisco;j++){
            printf("Digite o preco do disco %d em %d de marco de 2020:\n",j,cont);
            scanf("%d",&precoAtual); 
            if(precoAtual > precoTotal){
                maiorVenda=precoAtual;
                dia=cont;
                discosVendidosDiaAtual=quantDisco;
                precoTotal=precoAtual;
            }else{
                precoTotal+=0;
            }
            
            discosVendidos++;
        }
        
    }
    printf("A maior venda ocorreu no dia: %d no valor de R$%d \n",dia,maiorVenda);
    printf("A Quantidade de discos vendido nesse dia foi de: %d\n",discosVendidosDiaAtual);
    return 0;
}