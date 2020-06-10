#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int RA[5][2] = { {0,2},{0,0},{5,4},{4,7},{7,5} };
bool verificarSenha();
int main(void){
  
  
/*Foi solicitado a você que elabore um código em linguagem C que simule uma tranca de abertura de cofre onde os dígitos de seu RA (registro acadêmico de 9 ou 10 dígitos), de forma que sejam formados pares de dezenas para simular o número correto de cada etapa da tranca, ou seja, num RA fictício 19236798-5, converta para 01-92-36-79-85 para RAs com 9 dígitos ou sem acrescentar o 0 no caso de RAs com 10 dígitos.

Estes números devem ser os segredos que vão liberando a tranca etapa por etapa, sendo que a cada erro, reinicia-se a tranca e o usuário necessíta reiniciar a inserção dos números novamente, desde a primeira etapa, como no mecanismo de abertura de cofres mesmo.
Em caso do usuário não acertar as 5 dezenas, o processo é repetido infinitamente, como uma tranca normal, mas caso o usuário acerte os cinco números em sequência, uma mensagem deve ser exibida informando que a porta foi aberta.
*/

    //Meu RA: 20054477-5
    //Meu RA Convertido: 02-00-54-47-75

    //char green[] = {0x1b,'[', '1',';','3','2','m',0};
    char tranca[] = "0200544775";
    int senha[1][2];
    int i,j;
    int tentativas=5;
    bool acerto;
    //printf(green,"Teste");
    puts("ABERTURA DO COFRE");
    puts("O código é formado por 9 digitos");
    for(i=0;i<10;j++){
        acerto=false;
        printf("Digite a %d dezena formada por 2 digitos: \n",count+1);
        scanf("%d%d",&senha[i][j]);
        printf("%s",senha);
        
        if(verificarSenha(senha)){
          printf("ETAPA %d DESBLOQUEADA\n",count+1);
          acerto=true;
        }else{
          printf("SENHA ERRADA\n");
          printf("VOÇÊ TEM, %d TENTATIVAS\n",--tentativas);
          acerto=false;
        }         
    }
    return 0;
}
bool verificarSenha(char senha[][]){
  int count=0;
  int etapa=0;
  int i,j;
  for(i=0;i<5;i++){
    for(j=0;j<2;j++){
      if(senha[i][j]==RA[i][j]){
        return true;
      }
    }
  }
  return false;

}