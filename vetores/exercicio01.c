#include <stdio.h>

main() {

  int a[6] = {1, 0, 5, -2, -5, 7};
  int soma = 0, i;

  for (i = 0; i < 6; i++) {
    // printf("%d\n", a[i]);
    if (i == 0 || i == 1 || i == 5) {
      soma += a[i];
    }
    if (i == 4) {
      a[i] = 100;
    }
  }
  printf("%d\n", soma);
  printf("%d\n", a[4]);

  for (i = 0; i < 6; i++) {
    printf("%d\n", a[i]);
  }
}
