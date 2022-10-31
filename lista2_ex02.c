// Elaborar um programa que analisa se um número inteiro é 1 , 2 ou diferente de 1 e 2.
#include <stdio.h>

int main (){
    int x;
    
    printf("digite um número: ");
    scanf("%i", &x);
        
    if(x==1){
        printf("Você digitou o numero %i.\n", x);
    }
    else if(x==2){
        printf("Você digitou o número %i.\n", x);    
    }
    else{
        printf("O número é diferente de 1 ou 2.");
    }
    
    return 0;
}
