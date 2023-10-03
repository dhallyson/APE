#include <stdio.h>

main() {

  int a[10];
  int b[10];

  for (int i = 0; i < 10; i++) {
    printf("\nDigite um valor do indice %d: ", i);
    scanf("%d", &a[i]);
  }

  for(int i = 0; i < 10; i++){
    b[i] = a[i] * a[i];    
    printf("\nQuadrado do indice %d = %d", i, b[i]);
  }

}
