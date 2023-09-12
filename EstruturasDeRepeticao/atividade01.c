#include <stdio.h>

main() {

  int i, numPositivo;

  printf("Digite um número positivo: ");
  scanf("%d", &numPositivo);

  for (i = 0; i <= numPositivo; i++) {
    printf("%d\n", i);
  }
}
