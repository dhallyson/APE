#include <math.h>
#include <stdio.h>

main() {
  /*
    Calcule as raízes da equação de 2º grau.
  */

  int vA, vB, vC;
  int delta, raiz, valorXP, valorXN;

  printf("Digite o valor de A:");
  scanf("%d", &vA);
  fflush(stdin);

  printf("Digite o valor de B:");
  scanf("%d", &vB);
  fflush(stdin);

  printf("Digite o valor de C:");
  scanf("%d", &vC);
  fflush(stdin);

  delta = (vB * vB) - (4 * vA * vC);
  raiz = sqrt(delta);

  if (delta < 0) {
    printf("Não Existe Raiz");
  } else if (delta == 0) {
    printf("Raiz única %d", raiz);
  } else {
    valorXP = (-vB + raiz) / (2 * vA);
    valorXN = (-vB - raiz) / (2 * vA);

    printf("Raiz Positiva: %d \nRaiz Negativa: %d", valorXP, valorXN);
  }
}
