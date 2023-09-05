#include <stdio.h>

main() {
  /*
    Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou
    não se  aposentar. As condições para aposentadoria são: • Ter pelo
    menos 65 anos; • Ou ter trabalhado pelo menos 30 anos;, • Ou ter pelo
    menos 60 anos e trabalhado pelo menos 25 anos.
  */

  int idade, anosTrabalhados;

  printf("Digite sua idade: ");
  scanf("%d", &idade);
  fflush(stdin);

  printf("Digite quantos anos você trabalhou: ");
  scanf("%d", &anosTrabalhados);
  fflush(stdin);

  if (idade >= 65 || anosTrabalhados >= 30 ||
      (idade >= 60 || anosTrabalhados >= 25)) {
    printf("Aposentado");
  } else {
    printf("Ainda não aposenta");
  }
}
