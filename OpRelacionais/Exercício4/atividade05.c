#include <math.h>
#include <stdio.h>

main() {

  /*
  Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, se está 
  no intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores.
  */

  int number;

  printf("Digite um número: ");
  scanf("%d", &number);

  if (number == 5 || number == 200 || number == 400) {
    printf("O número %d é igual a 5 ou 200 ou 400", number);
  }else if(number > 500 && number < 1000){
    printf("O número %d está entre 500 e 1.000", number);
  }else{
    printf("O número %d é um número qualquer", number);
  }
}
