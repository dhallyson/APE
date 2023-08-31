#include <math.h>
#include <stdio.h>

main() {

  /*
  Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma       
  ascendente (do menor para o maior).
  */

  int nA, nB, nC;

  printf("Digite o número A: ");
  scanf("%d", &nA);
  fflush(stdin);

  printf("Digite o número B: ");
  scanf("%d", &nB);
  fflush(stdin);

  printf("Digite o número C: ");
  scanf("%d", &nC);
  fflush(stdin);

  if (nA < nB && nA < nC) {
    if(nB < nC){
      printf("%d %d %d", nA, nB,  nC);
    }else{
      printf("%d %d %d", nA, nC, nB);
    }
  }else if (nB < nA && nB < nC) {
    if(nA < nC){
      printf("%d %d %d", nB, nA,  nC);
    }else{
      printf("%d %d %d", nB, nC, nA);
    }
  }else if (nC < nA && nC < nB) {
    if(nA < nB){
      printf("%d %d %d", nC, nA,  nB);
    }else{
      printf("%d %d %d", nC, nB, nA);
    }
  }else{
    printf("Existem números repetidos, tente novamente!");
  }
}
