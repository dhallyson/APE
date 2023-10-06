#include <stdio.h>

main() {

  int vetor[8], x, y, soma;

  for (int i = 0; i < 8; i++) {
    printf("\nO valor do vetor[%d]: ", i);
    scanf("%d", &vetor[i]);
  }

  do {
    printf("\nDigite o valor de 0 - 7: ");
    scanf("%d", &x);

    printf("\nDigite o valor de 0 - 7: ");
    scanf("%d", &y);

    if ((x < 0 || x > 7) || (y < 0 || y > 7)) {
      printf("\nÍndice inválido");
    }

  } while ((x < 0 || x > 7) || (y < 0 || y > 7));

  soma = vetor[x] + vetor[y];
  printf("Resultado: %d", soma);
}
