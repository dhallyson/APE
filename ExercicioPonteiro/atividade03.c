#include <stdio.h>

main() {

  int numero1;
  int numero2;

  printf("Digite o primeiro número: ");
  scanf("%d", &numero1);

  printf("Digite o segundo número: ");
  scanf("%d", &numero2);

  printf("Num1 %d\n", &numero2);
  printf("Num2 %d\n", &numero1);
  
  if (&numero1 > &numero2) {
    printf("%d", &numero1);
  } else {
    printf("%d", &numero2);
  }
}
