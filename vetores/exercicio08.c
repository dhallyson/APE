#include <stdio.h>

main() {

  int vetor[6], maior = 0, menor = 0;

  for (int i = 0; i < 6; i++) {
    printf("\nDigite o valor do vetor[%d]: ", i);
    scanf("%d", &vetor[i]);
  }

  for (int i = 5; i >= 0; i--) {
    printf("\nValores inseridos no vetor[%d] na ordem inversa: ", vetor[i]);
  }
}
