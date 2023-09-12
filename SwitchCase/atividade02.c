#include <stdio.h>

main() {

  int codigoLanche, quantidadeLanche;
  float valorTotalLanche;

  printf("Digite o código do lanche: ");
  scanf("%d", &codigoLanche);

  printf("Digite a quantidade: ");
  scanf("%d", &quantidadeLanche);

  switch (codigoLanche) {
  case 100:
    valorTotalLanche = quantidadeLanche * 10.10;
    printf("Valor a ser pago: R$ %.2f", valorTotalLanche);
    break;
  case 101:
    valorTotalLanche = quantidadeLanche * 8.30;
    printf("Valor a ser pago: R$ %.2f", valorTotalLanche);
    break;
  case 102:
    valorTotalLanche = quantidadeLanche * 8.50;
    printf("Valor a ser pago: R$ %.2f", valorTotalLanche);
    break;
  case 103:
    valorTotalLanche = quantidadeLanche * 12.50;
    printf("Valor a ser pago: R$ %.2f", valorTotalLanche);
    break;
  case 104:
    valorTotalLanche = quantidadeLanche * 13.25;
    printf("Valor a ser pago: R$ %.2f", valorTotalLanche);
    break;
  default:
    printf("Nenhum lanche encontrado.");
  }
}
