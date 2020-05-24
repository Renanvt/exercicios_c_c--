#include <stdlib.h>
#include <stdio.h>

int main(){
    int senha = 2002;
    int senhaDigitada;
    while(senhaDigitada!=2002){
        printf("Digite a senha:\n");
        scanf("%d",&senhaDigitada);
        if(senhaDigitada!=senha){
            printf("Senha invalida\n");
        }else{
            printf("Acesso Permitido\n");
        }
    }
    return 0;
}