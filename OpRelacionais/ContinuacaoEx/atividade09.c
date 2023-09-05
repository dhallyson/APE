#include <stdio.h>

main() {
  /*
    Uma empresa decide dar um aumento aos seus funcionários de acordo com uma
    tabela que considera o salario atual e o tempo de serviço de cada
    funcionário. Os funcionários com menor salario terão um aumento
    proporcionalmente maior do que os funcionários  com um salario maior, e
    conforme o tempo de serviço na empresa, cada funcionário irá receber um
    bônus adicional de salário. Faça um programa que leia:

    • o valor do salario atual do funcionário;

    • o tempo de serviço desse funcionário na empresa (número de anos de
    trabalho na empresa).
  */

  int salarioValor, tempoServico;
  float reajuste;

  printf("Digite seu salário: R$");
  scanf("%d", &salarioValor);
  fflush(stdin);

  printf("Digite seu tempo de serviço na empresa: ");
  scanf("%d", &tempoServico);
  fflush(stdin);

  // Verifica se o salário é até 500,00
  if (salarioValor <= 500) {
    // Verifica se o tempo de serviço é maior que 1 ano
    if (tempoServico > 1) {
      // Calcula o reajuste de acordo com a tabela
      reajuste = (salarioValor * 0.25) + salarioValor;
      printf("O salário com reajuste é: R$ %.2f", reajuste);
    } else {
      printf("Nenhum reajuste");
    }
    // Verifica se o salário é até 500,00
  } else if (salarioValor > 500 && salarioValor <= 1000) {
    // Verifica se o tempo de serviço é maior que 1 e menor que 3 anos
    if (tempoServico >= 1 && tempoServico <= 3) {
      // Calcula o reajuste de acordo com a tabela
      reajuste = (salarioValor * 0.20) + salarioValor + 100;
      printf("O salário com reajuste é: R$ %.2f", reajuste);
    } else {
      printf("Nenhum reajuste");
    }
    // Verifica se o salário é até 500,00
  } else if (salarioValor > 1000 && salarioValor <= 1500) {
    // Verifica se o tempo de serviço é maior que 4 e menor que 6 anos
    if (tempoServico >= 4 && tempoServico <= 6) {
      // Calcula o reajuste de acordo com a tabela
      reajuste = (salarioValor * 0.15) + salarioValor + 200;
      printf("O salário com reajuste é: R$ %.2f", reajuste);
    } else {
      printf("Nenhum reajuste");
    }
    // Verifica se o salário é até 500,00
  } else if (salarioValor > 1500 && salarioValor <= 2000) {
    // Verifica se o tempo de serviço é maior que 7 e menor que 10 anos
    if (tempoServico >= 7 && tempoServico <= 10) {
      // Calcula o reajuste de acordo com a tabela
      reajuste = (salarioValor * 0.10) + salarioValor + 300;
      printf("O salário com reajuste é: R$ %.2f", reajuste);
    } else {
      printf("Nenhum reajuste");
    }
    // Condição que será executada caso o salário seja maior que R$ 2.000
  } else {
    // Verifica se o tempo de serviço é maior que 10 ano
    if (tempoServico > 10) {
      // Calcula o reajuste de acordo com a tabela
      reajuste = salarioValor + 500;
      printf("O salário com reajuste é: R$ %.2f", reajuste);
    } else {
      printf("Nenhum reajuste");
    }
  }
}
