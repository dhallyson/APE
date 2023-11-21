#include <stdio.h>


trocaValores(int val1, int val2){
  int backup = val1;

  printf("Valor1 antes da troca: %d\n", val1);
  printf("Valor2 antes da troca: %d\n", val2);
  
  val1 = val2;
  val2 = backup;

  printf("Valor1 depois da troca: %d\n", val1);
  printf("Valor2 depois da troca: %d\n", val2);
}

main() {

  int numero1;
  int numero2;

  printf("Digite o primeiro número: ");
  scanf("%d", &numero1);

  printf("Digite o segundo número: ");
  scanf("%d", &numero2);

  trocaValores(numero1, numero2);
}
