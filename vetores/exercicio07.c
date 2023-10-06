#include <stdio.h>

main() {

  int vetor[10], maior = 0, menor = 0, pMaior = 0, pMenor = 0;

  for (int i = 0; i < 10; i++) {
    printf("\ndigite o valor do vetor[%d]: ", i);
    scanf("%d", &vetor[i]);

    if (vetor[i] > maior) {
      maior = vetor[i];
    }
    if (vetor[i] < menor) {
      menor = vetor[i];
    }
  }

  maior = vetor[0];
  menor = vetor[0];

  for (int i = 0; i < 10; i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
      pMaior = vetor[i];
    }
    if (vetor[i] < menor) {
      menor = vetor[i];
      pMenor = vetor[i];
    }
  }

  printf("Maior valor: %d \nMenor valor: %d", maior, menor);
}
