#include <math.h>
#include <stdio.h>

main() {

  /*
      Uma revendedora de carros usados paga a seus funcionários vendedores um
     salário fixo   por mês, mais uma comissão também fixa para cada carro
     vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um
     algoritmo que leia o número de carros por ele vendidos, o valor total de
     suas vendas, o salário fixo e o valor que ele recebe por carro vendido.
     Calcule e escreva o salário final do vendedor.
  */

  // Definição de variáveis
  float carrosQuantidadeTotal;
  float carrosValorTotalVendas;
  float salarioFixo;
  float comissaoVendaRealizada;
  float porcentagemValorDaVenda = 0.05;
  float salarioFinalVendedor;

  printf("Carros vendidos ao todo: ");
  scanf("%f", &carrosQuantidadeTotal);
  fflush(stdin);

  printf("Valor total das vendas: ");
  scanf("%f", &carrosValorTotalVendas);
  fflush(stdin);

  printf("Salário fixo: ");
  scanf("%f", &salarioFixo);
  fflush(stdin);

  printf("Comissão de cada venda: ");
  scanf("%f", &comissaoVendaRealizada);
  fflush(stdin);

  // Processamento dos valores

  salarioFinalVendedor = salarioFixo +
                         (carrosQuantidadeTotal * comissaoVendaRealizada) +
                         (carrosValorTotalVendas * porcentagemValorDaVenda);

  // Mostra os resultados

  printf("O salário final do vendedor é: R$ %.2f", salarioFinalVendedor);
}
