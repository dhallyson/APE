#include <math.h>
#include <stdio.h>

main() {

  /*
  Construa um algoritmo que, dado quatro valores, A, B, C e D, o 
  algoritmo imprima o maior e o menor valor. 
  */

  int nA, nB, nC, nD;

  printf("Digite o número A: ");
  scanf("%d", &nA);
  fflush(stdin);

  printf("Digite o número B: ");
  scanf("%d", &nB);
  fflush(stdin);

  printf("Digite o número C: ");
  scanf("%d", &nC);
  fflush(stdin);

  printf("Digite o número D: ");
  scanf("%d", &nD);
  fflush(stdin);

  if (nA < nB && nA < nC && nA < nD) {
    printf("%d é o menor número\n", nA);
  } else if (nB < nA && nB < nC && nB < nD) {
    printf("%d é o menor número\n", nB);
  } else if (nC < nA && nC < nB && nC < nD) {
    printf("%d é o menor número\n", nC);
  } else if (nD < nA && nD < nB && nD < nC) {
    printf("%d é o menor número\n", nD);
  } else {
    printf("Existem números iguais, tente novamente!\n");
  }

  if (nA > nB && nA > nC && nA > nD) {
    printf("%d é o maior número\n", nA);
  } else if (nB > nA && nB > nC && nB > nD) {
    printf("%d é o maior número\n", nB);
  } else if (nC > nA && nC > nB && nC > nD) {
    printf("%d é o maior número\n", nC);
  } else if (nD > nA && nD > nB && nD > nC) {
    printf("%d é o maior número\n", nD);
  } else {
    printf("Existem números iguais, tente novamente!\n");
  }
}
