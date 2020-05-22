#include <stdlib.h>
#include <stdio.h>

int main(){
    /*Dados o número n de alunos de uma turma de Introdução aos Autômatos a Pilha (MAC 414) e suas notas da primeira prova, determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 100 e nota mínima = 0). */
    int alunos;
    float nota;
    int i;
    float maiorNota,menorNota=100,totNotas;
    printf("Entre com o numero de alunos:\n");
    scanf("%d",&alunos);
    for(i=1;i<=alunos;i++){
        printf("Entre a nota do aluno %d (0 a 100):\n",i);
        scanf("%f",&nota);
       
        if(maiorNota<nota)
            maiorNota=nota;
        if(menorNota>nota)
            menorNota=nota;
        
    }
    printf("A maior nota obtida pela turma foi: %.2f\n",maiorNota);
    printf("A menor nota obtida pela turma foi: %.2f\n",menorNota);

    return 0;
}