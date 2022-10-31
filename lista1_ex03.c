//Dadas as medidas de uma sala em metros (comprimento e largura), informe a sua área em metros quadrados.
#include <stdio.h>

int main() {
    float comp, larg, area;
    
    printf("Digite primeiro o comprimento e depois a largura da sala: ");
    scanf("%f%f", &comp, &larg);
    
    area = comp * larg;
    
    printf("A área total da sala é de %.2f m². \n", area);

    return 0;
}
