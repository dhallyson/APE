#include <stdio.h>

char validaSexo();
float validaSalario();
void classificaSalario(float salario, char *classificacao);
void mostraClassificacao(char sexo, float salario, char *classificacao);

int main(void) {
  float salarioMinimo = 1400.00;
  char classificacao[20];

  int abaixoSalarioMinimo = 0;
  int acimaSalarioMinimo = 0;
  int qtdAssalariados;

  printf("Digite quantos assalariados serão cadastrados: ");
  scanf(" %d", &qtdAssalariados);

  for (int i = 1; i <= qtdAssalariados; i++) {

    char sexo = validaSexo();
    float salario = validaSalario();
    classificaSalario(salario, classificacao);

    mostraClassificacao(sexo, salario, classificacao);

    if (salario < salarioMinimo) {
      abaixoSalarioMinimo++;
    } else {
      acimaSalarioMinimo++;
    }
  }

  printf("\nAssalariados abaixo do salário mínimo: %d\n", abaixoSalarioMinimo);
  printf("Assalariados acima do salário mínimo: %d\n", acimaSalarioMinimo);

  return 0;
}

char validaSexo() {
  char sexo;
  do {
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo != 'M' && sexo != 'F') {
      printf("Sexo digitado é inválido\n");
    }
  } while (sexo != 'M' && sexo != 'F');

  return sexo;
}

float validaSalario() {
  float salario;
  do {
    printf("Digite o salário: R$ ");
    scanf(" %f", &salario);

    if (salario < 1) {
      printf("Valor de salário inválido\n");
    }
  } while (salario < 1);

  return salario;
}

void classificaSalario(float salario, char *classificacao) {
  if (salario > 1400) {
    sprintf(classificacao, "Acima");
  } else if (salario < 1400) {
    sprintf(classificacao, "Abaixo");
  } else {
    sprintf(classificacao, "Igual");
  }
}

void mostraClassificacao(char sexo, float salario, char *classificacao) {
  printf("Sexo: %s\n", (sexo == 'M' || sexo == 'm') ? "Masculino" : "Feminino");
  printf("Salário: R$%.2f\n", salario);
  printf("Classificação em relação ao salário mínimo: %s do salário mínimo\n",
         classificacao);
}
