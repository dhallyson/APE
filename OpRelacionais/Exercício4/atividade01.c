#include <math.h>
#include <stdio.h>

main() {

  /*
  Escreva um algoritmo que leia um número e imprima a raiz quadrada do número
  caso ele seja positivo ou igual a zero e o quadrado do número caso ele
  seja negativo.
  */

  int number;

  printf("Digite um número: ");
  scanf("%d", &number);

  if (number >= 0) {
    printf("A raiz quadrada de %d é: %f", number, sqrt(number));
  } else {
    printf("O quadrado de %d é %d", number, number * number);
  }
}
