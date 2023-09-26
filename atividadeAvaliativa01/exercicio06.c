#include <math.h>>
#include <stdio.h>

// Leia 2 valores com uma casa decimal (x e y), que devem representar as
// coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao
// qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem
// (x = y = 0). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o
// ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a
// situação.

float valX, valY;

main() {

  printf("Digite o valor de X: ");
  scanf("%f", &valX);
  fflush(stdin);
  
  printf("Digite o valor de Y: ");
  scanf("%f", &valY);
  fflush(stdin);

  
  if (valX > 0 && valY > 0) {
    printf("O ponto pertence ao Q1");
  } else if (valX < 0 && valY > 0) {
    printf("O ponto pertence ao Q2");
  } else if (valX < 0 && valY < 0) {
    printf("O ponto pertence ao Q3");
  } else if (valX > 0 && valY < 0) {
    printf("O ponto pertence ao Q4");
  } else if (valX == 0 && valY == 0) {
    printf("Origem");
  } else {
    if (valX == 0) {
      printf("Eixo X");
    } else {
      printf("Eixo Y");
    }
  }
}
