/*Elaborar um programa que recebe uma nota.

 Caso a nota seja ‘zero’, o algoritmo informará que é a pior nota possível. 
 Caso a nota seja ‘dez’, o algoritmo informará que é melhor nota possível.
 Caso contrário, informará que é uma nota entre 0 e 10.
Obs: Usar estrutura switch - case
*/
#include <stdio.h>

int main (){
    int nota;
    
    printf("Digite uma nota: ");
    scanf("%i", &nota);
        
    switch(nota){
        case 0:
            printf("Caraca, essa é a pior nota que já vi!");
        break;

        case 10:
            printf("Melhor nota ever!");
        break;

        default:
            printf("A nota %i está entre 0 e 10.",nota);
    }
    return 0;
}