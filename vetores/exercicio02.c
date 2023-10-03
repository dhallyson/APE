#include <stdio.h>

main() {

  int numeros[6], i;

  for (i = 0; i < 6; i++) {
    printf("\nDigite um valor: ");
    scanf("%d", &numeros[i]);
  }

    printf("\nValores inseridos ");
  
  for (i = 0; i < 6; i++) {
    printf("%d ", numeros[i]);
  }
}
