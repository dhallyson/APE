#include <math.h>
#include <stdio.h>

// Dados três valores A, B e C, construa um algoritmo para verificar se estes
// valores podem ser valores dos lados de um triângulo, e se for classificá-los
// (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo
// Obtusângulo > 90º, Triângulo Acutângulo < 90º)

main() {
  int medida01 = 7, medida02 = 8, medida03 = 10, result;

  if ((medida01 + medida02) > medida03 && (medida01 + medida03) > medida02 &&
      (medida02 + medida03) > medida01) {

    if (pow(medida01, 2) == pow(medida02, 2) + pow(medida03, 2) ||
        pow(medida02, 2) == pow(medida01, 2) + pow(medida03, 2) ||
        pow(medida03, 2) == pow(medida01, 2) + pow(medida02, 2)) {
      printf("É um triângulo retângulo.");
    } else if (pow(medida01, 2) > pow(medida02, 2) + pow(medida03, 2) ||
               pow(medida01, 2) > pow(medida02, 2) + pow(medida03, 2) ||
               pow(medida01, 2) > pow(medida02, 2) + pow(medida03, 2)) {
      printf("É um triângulo obtusângulo.");
    }else{
      printf("É um triângulo acutângulo.");
    }

  } else {
    printf("Valor inválido para criação de um triângulo");
  }
}
