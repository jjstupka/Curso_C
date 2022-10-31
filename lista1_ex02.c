//Dado o total de vendas de um vendedor, calcule a sua comissão. Suponha que a comissão do vendedor seja de 10% do total de vendas.
int main() {
    float venda, comissao;
        
    printf("Digite o total de vendas do vendedor: ");
    scanf("%f", &venda);
        
    comissao = venda/10;
      
    printf("A comissão do vendedor é: %.2f \n", comissao);

    return 0;
}