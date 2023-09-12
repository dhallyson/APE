#include <stdio.h>

main() {

  int i, numPositivo;

  printf("Digite um número positivo: ");
  scanf("%d", &numPositivo);

  for (i = numPositivo; i >= 0; i--) {
    printf("%d\n", i);
  }
}
