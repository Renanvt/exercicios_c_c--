#include <stdlib.h>
#include <stdio.h>

int main(){
    /*Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados. */
    for(int i=1;i<10;i++){
        printf("%d - ",i);   
    }
    printf("\n");
    for(int i=1;i<10;i++){
        printf("%d - ",i*i);
    }
    return 0;
}