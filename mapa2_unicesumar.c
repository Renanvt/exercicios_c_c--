#include <stdio.h>
#include <string.h>
#include <locale.h> // ---------- Aqui falta a biblioteca necessária para idioma - 0.1 ponto
#include <stdbool.h> // Foi inserida a biblioteca de true or false
int main()
{
    ///VARIÁVEIS GERAIS
    char resposta[20]; //Armazena a resposta do jogador 1 
    int erros=0,acertos=0; // erros e acertos do jogador 2
    bool jogarNovamente=true; // Variável booleana caso o jogador deseje jogar novamente. Por padrão inicia como verdadeiro
    char letra[]={}; //Variávei que armazena a letra digitada pelo usuário;
    int pos=0; // posição da letra
    //variáveis contadoras
    int count=0;
    int j=0,i=0;   

    int opcao=0; //Variavel que armazena a opcao do usario ao terminar o jogo
    int max; // variavel que armazena o tamanho da resposta
 
    setlocale(LC_ALL,"Portuguese_brazil");// --------- Aqui falta a definiçao de idioma - 0.1 ponto
    system("clear||cls");

    printf("************ Jogo da Forca ************\n");        
    printf("************** Jogador 1 **************\n\n");
    printf("Utilize apenas letras minúsculas.\n");
    printf("Máximo de 20 letras\n\n");

    max = 1;             
    for (i = 1; i <= 20; i++) {   
        resposta[i] = ' ';   
    }
    erros = 0; acertos = 0;

    printf("Digite a palavra secreta: \n[SEM ESPAÇOS]\n");
    scanf (" %s", resposta);
    max = strlen (resposta);
    char resposta2[max];//Variável para fazer a copia
    strcpy(resposta2,resposta);// Realiza a copia da resposta e armazena em resposta2
    system("clear||cls");   

    printf("************ Jogo da Forca ************\n");   
    printf("************** Jogador 2 **************\n\n");
    printf("Utilize apenas letras minúsculas.\n");
    printf("Limite de 6 erros. Palavra de até 20 letras\n\n");

  
    while(jogarNovamente==true)// Coloquei aqui um loop infinito
    {  
             
        printf("Digite uma letra ou arrisque a palavra: \n");
        scanf (" %c", &letra[pos]); //A letra é armazenada na posição 0
        j = 0;  // Variável contadora (Inutilizável)          
        count=pos; // Variável contadora 2 recebe posição que é 0
            
        /*TIREI O FOR PARA O JOGO FICAR MAIS ROBUSTO*/  


        if (resposta[count] == letra[pos])//Se resposta[0] == letra[0] então a letra foi achada em resposta
        {    
            system("clear||cls"); //Limpa a tela
            printf("%c\n",resposta[count]);// Aqui exibe o resultado da resposta[0]. Exemplo: c. Poderia colocar tambem a resposta que o jogador 1 digitou até o momento
            pos++;//Posição aumenta em 1
            acertos++; j++; //Acertos e variável contadora 2 aumenta em 1
            printf ("\nAcertos: %d - Erros: %d\n",acertos, erros); //exibe a quantidade de acertos, e erros: acertos=1, erros=0            
        }else //Senão   
        {               
             erros++;//Erros aumenta de 0 pra 1
             printf ("\nAcertos: %d - Erros: %d\n",acertos, erros);       
        }
              
        /*AQUI EU TIREI J<=0 E SUBSTITUI PELO ELSE COM ERROS++ */

        /* ------------------- Aqui falta a parte responável pela verificação de vitoria ou derrota ----------------------*/
        if(erros==6) //Se erros ==6
        {
            printf("Perdeu!\n");//Fim de jogo
            printf("Jogar novamente?\n1 - sim\n2 - nao\n"); 
            scanf("%i",&opcao);
               
            ///RESETANDO AS VARIÁVEIS
            strcpy(resposta,resposta2) ;//utilizo essa funcao para a resposta do usuário voltar para a resposta definida pelo jogador 1               
            erros=0;
            acertos=0,erros=0;
            pos=0;
            j=0;
            //Limpando a tela
            system("clear||cls");      
        }
        if(acertos==max) // Se acertos == tamanho da palavra
        { 
            printf("Ganhou\n");
            printf("A palavra é \"%s\"\n",resposta2);// Exibe a resposta
            break;//Saio do loop infinito
        }

        /* -------------------------------------- Final da Verificação ----------------------------------------------------------------*/
        if(opcao==1) // Se opcao == 1. entra no loop denovo
           jogarNovamente=true;
        else if(opcao==2)// Se opcao == 2. Nao entra no loop
            jogarNovamente=false;   
                                             
    }
   return (0);
}