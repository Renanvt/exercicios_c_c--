#include <stdio.h>
#include <string.h>
#include <locale.h>         // ---------- Aqui falta a biblioteca necessária para idioma - 0.1 ponto
#include <stdbool.h>
int iniciarJogo();
int main()
{
    char resposta[20];  
    int erros;          
    int acertos;         
    char letra[]={};          
    int i, j;            
    int max;  
    int opcao;     
    int count=0;   
    int pos=0;  
    bool jogarNovamente=true;
    setlocale(LC_ALL,"");    // --------- Aqui falta a definiçao de idioma - 0.1 ponto

    limpaTela(); 
   
        

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
    printf("1 - Jogar novamente\n");
    printf("2 - Sair\n");
    scanf("%d",&opcao);
    switch (opcao)
    {
    case 1:
        printf("Inicia o jogo");
        jogarNovamente=true;
        break;
    case 2:
        printf("Sai do jogo");
        jogarNovamente=false;
        break;
    default:
        printf("Valor inválido");
        break;
    }


    
    return (0);
}
int iniciaJogo(int *max, char *resposta[]){
    int i;
    printf("************ Jogo da Forca ************\n");        
    printf("************** Jogador 1 **************\n\n");
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

void limpaTela(){
        system("clear||cls");  
}
 
