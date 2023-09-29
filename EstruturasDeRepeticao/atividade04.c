#include <stdio.h>

main() {

  // int cont, num = 15;

  // for(cont = 3; cont <= num; cont+=3){
  //   printf("\n%d", cont);
  // }


  int qtdDesejada = 10, multiplo = 3, contador = 1, qtd = 1;

  while (qtd <= qtdDesejada) {

    if ((contador % multiplo) == 0) {
      printf("\n%d", contador);
      qtd++;
    }

    contador++;
  }
}


