//Dado um número real qualquer, informe qual é o seu dobro.
#include <stdio.h>

int main() {
    int numero, dobro;
    
    printf("Digite um número para saber o seu dobro: ");
    scanf("%i", &numero);
    
    dobro = numero*2;
    
    printf("O dobro de %i é %i. \n", numero, dobro);

    return 0;
}