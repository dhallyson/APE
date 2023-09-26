#include <math.h>>
#include <stdio.h>

// A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando
// dados sobre o salário e número de filhos. A prefeitura deseja saber: a) média
// do salário da população; b) média do número de filhos; c) maior salário; d)
// percentual de pessoas com salário até R$100,00. O final da leitura de dados
// se dará com a entrada de um salário negativo. (Use o comando do - while) .

main() {

  float salario, mediaSalario, salarioTotal = 0, mediaFilhos, filhosTotal = 0,
                               salario100 = 0;
  int filhos, countHabitantes = 0;

  do {
    printf("Salário do habitante: ");
    scanf("%f", &salario);
    fflush(stdin);

    printf("Quantos filhos ele tem: ");
    scanf("%d", &filhos);
    fflush(stdin);

    if (salario > 0) {
      salarioTotal += salario;
      filhosTotal += filhos;

      countHabitantes++;

      if (salario <= 100) {
        salario100++;
      }
    }
  } while (salario > 0);

  mediaSalario = salarioTotal / countHabitantes;
  mediaFilhos = filhosTotal / countHabitantes;

  printf("\nMédia do salário da população é R$ %.2f", mediaSalario);
  printf("\nMédia de filhos da população é %.1f", mediaFilhos);
  printf("\n%.2f dos habitantes que recebem até R$ 100,00",
         (salario100 / countHabitantes) * 100);
}
