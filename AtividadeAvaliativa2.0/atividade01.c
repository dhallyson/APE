#include <stdio.h>

int validaQuantidade(int numeroPecas);
float calculaSalario(int numeroPecas);
void mostraFinal(int numeroPecas);

int main(void) {
  float salarioBase = 600.00;
  int numeroPecas;

  do {
    printf("Digite a quantidade de peças fabricadas: ");
    scanf("%d", &numeroPecas);
    mostraFinal(numeroPecas);
  } while (numeroPecas >= 0);

  return 0;
}

int validaQuantidade(int numeroPecas) {
  if (numeroPecas >= 0) {
    return numeroPecas;
  } else {
    return 1;
  }
}

float calculaSalario(int numeroPecas) {
  if (numeroPecas < 50) {
    return 600.00;
  } else if (numeroPecas <= 80) {
    return 600.00 + (numeroPecas - 50) * 0.50;
  } else {
    return (numeroPecas - 80) * 0.75 + 600.00 + 15.00;
  }
}

void mostraFinal(int numeroPecas) {
  if (validaQuantidade(numeroPecas) == 1) {
    printf("Quantidade inválida\n");
  } else {
    printf("O salário final é: %.2f\n\n", calculaSalario(numeroPecas));
  }
}
