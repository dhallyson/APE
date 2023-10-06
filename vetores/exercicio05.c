#include <stdio.h>

main() {

  int vetor[10], pares = 0;

  for (int i = 0; i < 10; i++) {
    printf("\nO valor do vetor[%d]: ", i);
    scanf("%d", &vetor[i]);

    if(vetor[i] % 2 == 0){
      pares++;
    }
  }

  printf("Existem %d pares", pares);
}
