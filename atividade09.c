#include <math.h>
#include <stdio.h>

main() {

  /*
  Escreva um algoritmo para ler o salário mensal atual de um funcionário
  e o percentual de reajuste. Calcular e escrever o valor do novo salário.
  */

  // Definição de variáveis
  float salarioMensal, salarioNovoValor;
  int salarioPercentualReajuste;

  // Scan salario Mensal

  printf("Digite seu salario mensal: ");
  scanf("%f", &salarioMensal);
  // fflush(stdin);

  // Scan reajuste salarial

  printf("Digite a porcentagem do reajuste: ");
  scanf("%d", &salarioPercentualReajuste);
  // fflush(stdin);

  // Processamento dos valores

  // Calculo 01: Descobrir quanto vale a porcentagem do salário e somar ao
  // salário
  salarioNovoValor =
      ((salarioPercentualReajuste * 0.01) * salarioMensal) + salarioMensal;

  // Mostra os resultados

  printf("O reajuste de %d em cima do salario de %.2f resulta no salario novo R$ "
         "%.2f",
         salarioPercentualReajuste, salarioMensal, salarioNovoValor);
}
