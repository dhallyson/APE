#include <math.h>
#include <stdio.h>

main() {

  /*
    O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
    porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
    Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%,
    escrever um algoritmo para ler o custo de fábrica de um carro, calcular e
    escrever o custo final ao consumidor
  */

  // Definição de variáveis
  float custoFabricaCarro, custoFinalConsumidor;

  // Scan salario Mensal

  printf("Digite o custo de fabricação do carro: ");
  scanf("%f", &custoFabricaCarro);

  // Processamento dos valores

  // Calculo 01: Descobrir quanto vale a porcentagem do salário e somar ao
  // salário
  custoFinalConsumidor = (custoFabricaCarro * 0.28) +
                         (custoFabricaCarro * 0.45) + custoFabricaCarro;

  // Mostra os resultados

  printf("O custo final do consumidor com o carro é: R$ %.2f",
         custoFinalConsumidor);
}
