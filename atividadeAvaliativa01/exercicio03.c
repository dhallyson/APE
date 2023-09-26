#include <math.h>
#include <stdio.h>

// Dado três valores, A, B e C, construa um algoritmo para verificar se estes
// valores podem ser valores dos lados de um triângulo, e se for, se é um
// triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.

main() {
  int medida01 = 10, medida02 = 15, medida03 = 12;

  if ((medida01 + medida02) > medida03 && (medida01 + medida03) > medida02 &&
      (medida02 + medida03) > medida01) {

    if (medida01 == medida02 && medida02 == medida03) {
      printf("Trinângulo equilátero");
    } else if (medida01 == medida02 || medida02 == medida03 ||
               medida01 == medida03) {
      printf("Trinângulo isósceles");
    }else{
      printf("Trinângulo escaleno");
    }
    
  } else {
    printf("Valor inválido para criação de um triângulo");
  }
}
