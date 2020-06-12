#include <stdio.h>
#include <string.h>
#include <locale.h>         // ---------- Aqui falta a biblioteca necessária para idioma - 0.1 ponto
#include <stdbool.h>
void novoJogo();
void iniciarJogo();
int main()
{ 
    int erros;          
    int acertos;         
    char letra[]={};          
    int i, j;            
    int opcao;     
    int count=0;   
    int pos=0;  
    bool jogarNovamente=true;
    char jogador1[20];
    char jogador2[20];
    setlocale(LC_ALL,"");    // --------- Aqui falta a definiçao de idioma - 0.1 ponto

    limpaTela(); 
    iniciarJogo();
        

    erros=0;acertos=0;   
    printf("************ Jogo da Forca ************\n");   
    printf("************** Jogador 2 **************\n\n");
    printf("Utilize apenas letras minúsculas.\n");
    printf("Limite de 6 erros. Palavra de até 20 letras\n\n");

    while(jogarNovamente==true)    // Aqui falta a condição de parada do laço - 0,3 ponto
    {  
           printf("Digite uma letra: ");
            scanf (" %c", &letra[pos]);
            j = 0;            
            count=pos;
            
                 
               if (resposta[count] == letra[pos])
               {
                   pos++;
                   acertos++; j++;
                    printf ("\nAcertos: %d - Erros: %d\n",acertos, erros);             
               }else{
                   erros++;
                   printf ("\nAcertos: %d - Erros: %d\n",acertos, erros);
                   
               }
                   
           
         
        //if (j <= 0)      
          //      erros++;
        
        if(erros==6){
            printf("Perdeu!\n");
            break;
        }
        if(acertos==max){
            printf("Ganhou\n");
            break;
        }
    }
    printf("1 - Novo jogo\n");
    printf("2 - Jogar novamente\n");
    printf("3 - Sair\n");
    scanf("%d",&opcao);
    switch (opcao)
    {
    case 1:
        printf("Novo jogo");
        printf("Digite o nome do Jogador1: ");
        scanf("%s",jogador1);
        iniciarJogo(jogador1);
        break;
    case 2:
        iniciarJogo();
        jogarNovamente=false;
        break;
    default:
        printf("Valor inválido");
        break;
    }


    
    return (0);
}
void novoJogo(char jogador1[]){
    int i;
    int max;
    char resposta[20];
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
       
}

void iniciarJogo(char *resposta[],int *max){
    int erros=0,acertos=0;
    bool jogarNovamente;
    char letra[]={};
    int pos=0;
    int count=0;
    int i,j;   
    printf("************ Jogo da Forca ************\n");   
    printf("************** Jogador 2 **************\n\n");
    printf("Utilize apenas letras minúsculas.\n");
    printf("Limite de 6 erros. Palavra de até 20 letras\n\n");
    while(jogarNovamente==true)    // Aqui falta a condição de parada do laço - 0,3 ponto
    {  
           printf("Digite uma letra: ");
            scanf (" %c", &letra[pos]);
            j = 0;            
            count=pos;
            
                 
               if (resposta[count] == letra[pos])
               {
                   pos++;
                   acertos++; j++;
                    printf ("\nAcertos: %d - Erros: %d\n",acertos, erros);             
               }else{
                   erros++;
                   printf ("\nAcertos: %d - Erros: %d\n",acertos, erros);
                   
               }
                   
           
         
        //if (j <= 0)      
          //      erros++;
        
        if(erros==6){
            printf("Perdeu!\n");
            break;
        }
        if(acertos==max){
            printf("Ganhou\n");
            break;
        }
    }


}
void limpaTela(){
        system("clear||cls");  
}
 
