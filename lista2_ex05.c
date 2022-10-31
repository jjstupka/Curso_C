/*Elaborar um programa que analisa se um número inteiro é maior que 100 e, se for maior, quantas vezes ele é maior que 100.
Por exemplo, o número 249 é 2,49 vezes maior que 100.
Obs: Usar estrutura if - else
*/
#include <stdio.h>

int main (){
    int num;
    float div;
    
    printf("Digite um numero: ");
    scanf("%i", &num);
        
    if (num < 100){
        printf("Este numero é menor que 100.");
    }
    else{
        div = (float)num/100;
        printf("O numero digitado é %.2f maior que 100.", div);
    }
    return 0;
}