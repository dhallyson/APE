#include <math.h>
#include <stdio.h>

// Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x).

main() {
  float result, value = 12;

  result = ((value * 5) + 3) / (sqrt((pow(value, 2) - 16)));

  printf("f(x) = %f", result);
}
