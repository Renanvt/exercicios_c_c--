#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int main(){
    int num;
    int i;
    bool triangular=false;
    printf("Entre com um número:\n");
    scanf("%d",&num);
    triangular=false;
    for(i=1;i*(i+1)*(i+2)<num;i++){
        if(i*(i+1)*(i+2) == num){
            triangular = true;
        }
           
    }
    if(triangular==true){
        printf("O número natural é triangular \n");
    }else{
        printf("O número natural não é triangular \n");
    }
    
    return 0;
}