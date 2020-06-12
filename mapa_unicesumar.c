#include <stdio.h>
#include <string.h>
#include <locale.h>         // ---------- Aqui falta a biblioteca necessária para idioma - 0.1 ponto
#include <stdbool.h>

void limpaTela();
void menu();
void novoJogo(char jogador1[],char jogador2[],char resposta[], int max);
void iniciarJogo(char jogador2[],char resposta[], int max);
void verificarLetras(char resposta[],int max);
char jogador1[20]="";
char jogador2[20]="";
char resposta[20]={};
int main()
{   
    setlocale(LC_ALL,"");    // --------- Aqui falta a definiçao de idioma - 0.1 ponto
    limpaTela();
    menu();           
    return (0);
}
void limpaTela(){
        system("clear||cls");  
}

void menu(){
    int opcao=0;         
    int max;            
    //char jogador1[20]="";
    //char jogador2[20]="";
    //char resposta[20]={};
    while(opcao<4){
        printf("1 - Novo jogo\n");
        printf("2 - Sobre o jogo\n");
        printf("3 - Sair\n");
        scanf("%d",&opcao);
        switch (opcao)
        {
        case 1:
            limpaTela();
            printf("NOVO JOGO\n");
            printf("Digite o nome do Jogador1: \n");
            scanf("%s",&jogador1);
            fflush(stdin);
            printf("Digite o nome do Jogador2: \n");
            scanf("%s",&jogador2);
            fflush(stdin);
            novoJogo(jogador1,jogador2,resposta,max);         
            break;
        case 2:
            limpaTela();
            print("Adaptado por Jonatan Renan");
            printf("RA: 20054477-5\n");
            printf("Versão: 1.0");
            printf("GitHub: ")
            break;
        }
    }
}

void novoJogo(char jogador1[],char jogador2[],char resposta[], int max){
    limpaTela();
    int i=0;
    printf("************ Jogo da Forca ************\n");       
    printf("************** Jogador %s **************\n\n",jogador1);
    printf("Utilize apenas letras minúsculas.\n");
    printf("Máximo de 20 letras\n\n");

    max = 1;             
    for (i = 1; i <= 20; i++) {   
        resposta[i] = ' ';   
    }
    printf("Digite a palavra secreta: ");
    scanf (" %s", resposta);
    max = strlen (resposta);
    //printf("%s",*resposta);
    //printf("%s",*resposta);

    iniciarJogo(jogador2,resposta,max);  
}

void iniciarJogo(char jogador2[],char resposta[],int max){
    
    limpaTela();
    printf("************ Jogo da Forca ************\n");   
    printf("************** Jogador %s **************\n\n",jogador2);
    printf("Utilize apenas letras minúsculas.\n");
    printf("Limite de 6 erros. Palavra de até 20 letras\n\n");

    verificarLetras(resposta,max);
        
}
void verificarLetras(char resposta[],int max){
    int erros=0,acertos=0;
    bool jogarNovamente=true;
    char letra[]={};
    int pos=0;
    int count=0;
    int j=0;   
    int opcao=0;
     while(jogarNovamente==true)    // Aqui falta a condição de parada do laço - 0,3 ponto
    {  

           printf("Digite uma letra: ");
            scanf (" %c", &letra[pos]);
            j = 0;            
            count=pos;
            
                 
               if (resposta[count] == letra[pos])
               {    
                   limpaTela();
                   printf("%c\n",resposta[count]);
                   pos++;
                   acertos++; j++;
                    printf ("\nAcertos: %d - Erros: %d\n",acertos, erros);             
               }else{
                   erros++;
                   printf ("\nAcertos: %d - Erros: %d\n",acertos, erros);
                   
               }
        
        if(erros==6){
            printf("Perdeu!\n");
                printf("Jogar novamente?\n1 - sim\n2 - nao\n"); 
                fflush(stdin);
                scanf("%i",&opcao);
                erros=0;
                acertos=0,erros=0;
                pos=0;
                j=0;
                       
        }
        if(opcao==1)
           jogarNovamente=true;
        else if(opcao==2)
            jogarNovamente=false;   
       
                               
        if(acertos==max){
            printf("Ganhou\n");
            //menu();
            break;
        }
    }
    
}

