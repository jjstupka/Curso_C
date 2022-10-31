//Elaborar um programa que permita ao usuário somar dois ou três números inteiros, segundo seu desejo.
#include <stdio.h>

int main (){
    //desenvolva aqui o programa
    int cont, x, y, z, soma;
    
    printf("Digite se você quer somar 2 (digite 2) ou 3 (digite 3) numeros: ");
    scanf("%i", &cont);
        
    if(cont==2){
        printf("Digite os dois números que quer somar: ");
        scanf("%i%i", &x, &y);
        
        soma = x + y;
        
        printf("A soma dos 2 números é: %i.\n",soma);
    }
    else if(cont==3){
        printf("Digite os tres números que quer somar: ");
        scanf("%i%i%i", &x, &y, &z);
        
        soma = x + y + z;
        
        printf("A soma dos 2 números é: %i.\n",soma);
    }
    else{
        printf("O número é diferente de 1 ou 2.");
    }
    
    return 0;
}