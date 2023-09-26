#include <math.h>>
#include <stdio.h>

// Leia os quatro valores correspondentes aos eixos x e y de dois pontos
// quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles,
// mostrando 4 casas decimais após a vírgula, segundo a fórmula

float distancia, pontoX1 = 3, pontoY1 = 5, pontoX2 = 6, pontoY2 = 1;

main() {

  distancia = sqrt(pow((pontoX2 - pontoX1), 2) + pow((pontoY2 - pontoY1), 2));

  printf("%.4f", distancia);
}
