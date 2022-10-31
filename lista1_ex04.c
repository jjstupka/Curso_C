//Dados um salário e um percentual de reajuste, calcule o salário reajustado:
#include <stdio.h>
int main() {
    float salario, reajuste, total;
    
    printf("Digite primeiro o valor do salário e em seguida quantos por cento de reajuste: ");
    scanf("%f%f", &salario, &reajuste);
        
    total = salario + salario * (reajuste/100);
    
    printf("O salário reajustado fica em: %.2f reais. \n", total);

    return 0;
}
