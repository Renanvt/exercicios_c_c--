#include <stdlib.h>
#include <stdio.h>

int main(){
    /* Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos.
    */
    int num,soma=0;
    printf("Digite um número:\n");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
            soma+=i;
        }
        
    printf("A soma dos n primeiros numeros = %d", soma);
    return 0;

     /* SOLUCAO 2
 

    #include <stdio.h>

    int main() {
        int n,     /* guarda o numero dado    */
        /*soma;  /* guarda as somas parcias */
  
        /*printf("\n\tCalculo da soma dos n primeiros inteiros positivos\n");
  
        /* Inicializacoes */
        /*printf("\nDigite o valor de n: ");
        scanf("%d", &n);
  
         /* Calcula a soma */
        /*soma = (n * (n + 1)) / 2;
  
        /* Escreve a resposta */
        /*printf("A soma dos %d primeiros inteiros positivos e' %d\n", n, soma);
  
        return 0;
    }*/
}
