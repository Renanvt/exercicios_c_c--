#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char RA[] = "0200544775";
bool verificarSenha();
void limpaTela();
int main(void){
  
  
/*Foi solicitado a você que elabore um código em linguagem C que simule uma tranca de abertura de cofre onde os dígitos de seu RA (registro acadêmico de 9 ou 10 dígitos), de forma que sejam formados pares de dezenas para simular o número correto de cada etapa da tranca, ou seja, num RA fictício 19236798-5, converta para 01-92-36-79-85 para RAs com 9 dígitos ou sem acrescentar o 0 no caso de RAs com 10 dígitos.

Estes números devem ser os segredos que vão liberando a tranca etapa por etapa, sendo que a cada erro, reinicia-se a tranca e o usuário necessíta reiniciar a inserção dos números novamente, desde a primeira etapa, como no mecanismo de abertura de cofres mesmo.
Em caso do usuário não acertar as 5 dezenas, o processo é repetido infinitamente, como uma tranca normal, mas caso o usuário acerte os cinco números em sequência, uma mensagem deve ser exibida informando que a porta foi aberta.
*/

    //Meu RA: 20054477-5
    //Meu RA Convertido: 02-00-54-47-75

    char senha[2];
    int i=1,j=0;
    int etapa=0;
    bool acerto = false;
    limpaTela();
    printf("------------------\n");
    puts("ABERTURA DO COFRE");
    puts("A abertura é formado\n por 5 etapas");
    printf("------------------\n");
    
     getchar();
    
   
    while(true){
        limpaTela();
       
        printf("Digite a %d dezena formada por 2 digitos: \n",i);
        scanf("%s",senha);
       
        if(verificarSenha(senha,etapa)==true){
          printf("ETAPA %d DESBLOQUEADA\n", i);
          i++;
          etapa+=2;
          acerto=true;
          getchar();
        }else{
          printf("SENHA ERRADA\n");
          printf("REINICIANDO A TRANCA...\n");
          i=1;
          etapa=0;
          acerto=false;
          getchar();
        }
        putchar('\n');
        getchar();
        if(etapa==strlen(RA))
          break;         
        
    }
    printf("COFRE ABERTO!\n");
    return 0;
}
bool verificarSenha(char senha[],int etapa){
  int i;
  int acha = 0;
  for(i=0;i<strlen(RA)-etapa;i++){ 
      if(senha[i]==RA[i+etapa]){ 
        acha+=1;
      }else{
        break;
      }
    }      
  if(acha==2)
    return true;
  else
    return false;

}
void limpaTela(){
  system("clear");
}