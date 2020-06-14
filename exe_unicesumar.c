#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char RA[] = "0200544775";//Meu RA em um vetor de char
bool verificarSenha();
void limpaTela();
int main(void){
  
  
/*Foi solicitado a você que elabore um código em linguagem C que simule uma tranca de abertura de cofre onde os dígitos de seu RA (registro acadêmico de 9 ou 10 dígitos), de forma que sejam formados pares de dezenas para simular o número correto de cada etapa da tranca, ou seja, num RA fictício 19236798-5, converta para 01-92-36-79-85 para RAs com 9 dígitos ou sem acrescentar o 0 no caso de RAs com 10 dígitos.

Estes números devem ser os segredos que vão liberando a tranca etapa por etapa, sendo que a cada erro, reinicia-se a tranca e o usuário necessíta reiniciar a inserção dos números novamente, desde a primeira etapa, como no mecanismo de abertura de cofres mesmo.
Em caso do usuário não acertar as 5 dezenas, o processo é repetido infinitamente, como uma tranca normal, mas caso o usuário acerte os cinco números em sequência, uma mensagem deve ser exibida informando que a porta foi aberta.
*/

    //Meu RA: 20054477-5
    //Meu RA Convertido: 02-00-54-47-75
    //Esse programa foi feito em Linux

    ///VARIÁVEIS GERAIS
    char senha[2]; //Senha que o usuário vai digitar
    int i=1; // Variável contadora
    int etapa=0; // Etapa da senha, cada etapa tem 2 caracteres. Total de etapas = 10;
    bool acerto = false; // Caso o usuário erre ou acerte

    limpaTela(); //Função de limpar a tela
    printf("------------------\n");
    puts("ABERTURA DO COFRE");
    puts("A abertura é formado\n por 5 etapas");
    printf("------------------\n");
    printf("\nAperte qualquer [ENTER] para continuar...");
     getchar(); // Captura uma tecla do usuário
    
   
    while(true){ //Loop infinito
        limpaTela();
        
        printf("Digite a %d dezena formada por 2 digitos: \n",i);
        scanf("%s",senha);
       
        if(verificarSenha(senha,etapa)==true){ // Função que verifica a senha e sua respectiva etapa, retornando true ou false
          printf("ETAPA %d DESBLOQUEADA\n", i);
          i++;//contador
          etapa+=2;//Etapa passa para próxima
          acerto=true;//acerto do usuário recebe true
          getchar();
        }else{
          printf("SENHA ERRADA\n");
          printf("REINICIANDO A TRANCA...\n");
          i=1;//contador recebe 1
          etapa=0; // Reseta a etapa
          acerto=false;// acerto do usuário recebe false
          getchar();
        }
        putchar('\n'); //quebra de Linha
        getchar();
        if(etapa==strlen(RA))//Se Etapa == 10
          break;//sai do loop infinito         
        
    }
    limpaTela();
    printf("PORTA ABERTA!\n");
    printf("-------------\n");
    printf("COFRE ABERTO!\n");
    printf("-------------\n");
    printf("\n");
    return 0;
}
//Função que valida a senha
bool verificarSenha(char senha[],int etapa){
  int i;//contador
  int acha = 0;
  for(i=0;i<strlen(RA)-etapa;i++){//Para 1=0; Equanto 1<10-0; i++ 
      if(senha[i]==RA[i+etapa]){ //Se senha[0] == RA[0+0]
        acha+=1;//Acha a letra
      }else{
        break;//sai do laço
      }
    }      
  if(acha==2)
    return true;
  else
    return false;

}
void limpaTela(){
  system("clear||cls");
}