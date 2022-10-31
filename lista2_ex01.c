//Fazer um programa que permita somar números não negativos informados pelo usuário até que ele digite um número negativo (critério de parada).
#include <stdio.h>

int main (){
    //desenvolva aqui o programa
    int x=0, y=0;
    while(x>=0){
        printf("digite um número positivo para somar e negativo para sair:");
        scanf("%i", &x);
        if(x>=0){
            y=y+x;
            printf("somatória: %i\n", y);
        }
    }
    printf("saiu do looping");
    
    return 0;
}