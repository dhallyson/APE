#include <stdio.h>

main() {

  int vetor[6];

  for (int i = 0; i < 6; i++) {
    do {
      printf("\nDigite o valor do vetor[%d]: ", i);
      scanf("%d", &vetor[i]);

      if (vetor[i] % 2 != 0) {
        printf("\nValor inválido");
      }

    } while (vetor[i] % 2 != 0);
  }

  for (int i = 5; i >= 0; i--) {
    printf("\nValores inseridos no vetor[%d] na ordem inversa: ", vetor[i]);
  }
}
