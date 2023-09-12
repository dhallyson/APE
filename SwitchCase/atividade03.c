#include <stdio.h>

main() {

  int prato, sobremesa, bebida, totalCal;

  printf("Digite o prato: ");
  scanf("%d", &prato);

  printf("Digite a sobremesa: ");
  scanf("%d", &sobremesa);

  printf("Digite a bebida: ");
  scanf("%d", &bebida);

  switch (prato) {
  case 1:
    totalCal = 180;
    break;
  case 2:
    totalCal = 230;
    break;
  case 3:
    totalCal = 250;
    break;
  case 4:
    totalCal = 350;
    break;
  }

  switch (sobremesa) {
  case 1:
    totalCal += 75;
    break;
  case 2:
    totalCal += 110;
    break;
  case 3:
    totalCal += 170;
    break;
  case 4:
    totalCal += 200;
    break;
  }

  switch (bebida) {
  case 1:
    totalCal += 20;
    break;
  case 2:
    totalCal += 70;
    break;
  case 3:
    totalCal += 100;
    break;
  case 4:
    totalCal += 65;
    break;
  }

  printf("Total de calorias %d", totalCal);
}
