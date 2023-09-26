#include <math.h>>
#include <stdio.h>

// A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando
// dados sobre o salário e número de filhos. A prefeitura deseja saber: a) média
// do salário da população; b) média do número de filhos; c) maior salário; d)
// percentual de pessoas com salário até R$100,00. O final da leitura de dados
// se dará com a entrada de um salário negativo. (Use o comando do - while) .

main() {

  int candidado01 = 0, candidado02 = 0, candidado03 = 0, candidado04 = 0, voto,
      votoNulo = 0, votoBranco = 0;

  do {
    printf("\n--- Qual candidato você vai votar ---\n");
    printf("1 - Candidato 1\n2 - Candidato 2\n3 - Candidato 3\n4 - Candidato "
           "4\n5 - Nulo\n6 - Branco\n0 - Sair");
    printf("\n\nDigite uma opção: ");
    scanf("%d", &voto);
    fflush(stdin);

    switch (voto) {
    case 1:
      candidado01++;
      break;
    case 2:
      candidado02++;
      break;
    case 3:
      candidado03++;
      break;
    case 4:
      candidado04++;
      break;
    case 5:
      votoNulo++;
      break;
    case 6:
      votoBranco++;
      break;
    }

  } while (voto > 0);

  printf("\n--- Total de votos ---");
  printf("\nCandidato 1: %d", candidado01);
  printf("\nCandidato 2: %d", candidado02);
  printf("\nCandidato 3: %d", candidado03);
  printf("\nCandidato 4: %d", candidado04);
  printf("\nVoto Nulo: %d", votoNulo);
  printf("\nVoto Branco: %d", votoBranco);
}
