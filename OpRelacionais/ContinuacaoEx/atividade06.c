#include <stdio.h>

main() {
  /*
  Codifique um programa que lê um número inteiro. A seguir o programa deve imprimir uma mensagem     para o usuário dizendo se o número digitado é par. Se o número não for par, o programa não deve    fazer nada.  
  */

  int number;

  printf("Digite um número inteiro: ");
  scanf("%d", &number);

  if(number % 2 != 1){
    printf("O número é par");
  }
}
