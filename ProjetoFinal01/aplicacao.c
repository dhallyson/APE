#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char proprietario[50];
  int combustivel;
  char modelo[50];
  char cor[10];
  char chassi[100];
  int ano;
  char placa[10];
} Carro;

int validarPlaca(char *placa);
void mostrarCarro(Carro *carro);
void listaCarrosDiesel2010(Carro *carros, int quantidade);
void listaPlacas(Carro *carros, int quantidade);
int somaDigitos(char *str);
void listaModeloCorVogalPar(Carro *carros, int quantidade);
void trocaDono(Carro *carros, int quantidade);

int main() {
  Carro *carros = NULL;
  int cadSair, placaVerica;
  int quantidadeCarros = 0;

  do {
    carros = realloc(carros, (quantidadeCarros + 1) * sizeof(Carro));

    printf("\nCadastro do veículo %d:\n", quantidadeCarros + 1);

    printf("1) Digite o nome do proprietário: ");
    fgets(carros[quantidadeCarros].proprietario,
          sizeof(carros[quantidadeCarros].proprietario), stdin);

    do {
      printf("\n2) O carro é movido\n1 - álcool\n2 - diesel\n3 - gasolina\n");
      scanf("%d", &carros[quantidadeCarros].combustivel);
      getchar();
    } while (carros[quantidadeCarros].combustivel != 1 &&
             carros[quantidadeCarros].combustivel != 2 &&
             carros[quantidadeCarros].combustivel != 3);

    printf("3) Qual o modelo do veículo: ");
    fgets(carros[quantidadeCarros].modelo,
          sizeof(carros[quantidadeCarros].modelo), stdin);

    printf("4) Qual a cor do veículo: ");
    fgets(carros[quantidadeCarros].cor, sizeof(carros[quantidadeCarros].cor),
          stdin);

    printf("5) Qual o chassi do carro: ");
    fgets(carros[quantidadeCarros].chassi,
          sizeof(carros[quantidadeCarros].chassi), stdin);

    printf("6) Qual o ano do carro: ");
    scanf("%d", &carros[quantidadeCarros].ano);
    getchar();

    do {
      printf("\n7) Digite a placa do veículo: ");
      scanf("%10[^\n]%*c", carros[quantidadeCarros].placa);

      placaVerica = validarPlaca(carros[quantidadeCarros].placa);

      if (placaVerica != 1) {
        printf("Digite uma placa válida\n");
      }

    } while (placaVerica != 1);

    quantidadeCarros++;

    printf("Deseja cadastrar mais carros? (1 - Sim, 2 - Não): ");
    scanf("%d", &cadSair);
    getchar();

  } while (cadSair != 2);

  do {
    printf("\nMenu:\n1 - Listar os donos de carros movidos a diesel ou com "
           "carros mais novos que 2010\n");
    printf("2 - Listar placas que começam com J e terminam com 0 - 2 - 4 ou "
           "7\n\n");
    printf("3 - Listar modelo e cor dos carros com placas que têm segunda "
           "letra vogal e soma dos valores numéricos é par\n\n");
    printf("4 - Trocar proprietário por chassi (apenas carros sem dígito zero "
           "na placa)\n\n");
    printf("5 - Finalizar\n\n\n");
    printf("Digite uma opção: ");
    scanf("%d", &cadSair);

    switch (cadSair) {
    case 1:
      listaCarrosDiesel2010(carros, quantidadeCarros);
      break;
    case 2:
      listaPlacas(carros, quantidadeCarros);
      break;
    case 3:
      listaModeloCorVogalPar(carros, quantidadeCarros);
      break;
    case 4:
      trocaDono(carros, quantidadeCarros);
      break;
    case 5:
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
    }

  } while (cadSair != 5);

  free(carros);

  return 0;
}

int validarPlaca(char *placa) {
  if (strlen(placa) != 7) {
    return 0;
  }

  for (int i = 0; i < 3; i++) {
    if (!isalpha(placa[i])) {
      return 0;
    }
  }

  for (int i = 3; i < 7; i++) {
    if (!isdigit(placa[i])) {
      return 0;
    }
  }

  return 1;
}

void mostrarCarro(Carro *carro) {
  printf("Proprietário: %s\n", carro->proprietario);
  printf("Combustível: %d\n", carro->combustivel);
  printf("Modelo: %s\n", carro->modelo);
  printf("Cor: %s\n", carro->cor);
  printf("Chassi: %s\n", carro->chassi);
  printf("Ano: %d\n", carro->ano);
  printf("Placa: %s\n", carro->placa);
}

void listaCarrosDiesel2010(Carro *carros, int quantidade) {
  printf(
      "\nProprietários de carros diesel com ano igual ou superior a 2010:\n");

  for (int i = 0; i < quantidade; i++) {
    if (carros[i].ano >= 2010 && carros[i].combustivel == 2) {
      printf("- %s\n", carros[i].proprietario);
    }
  }
}

void listaPlacas(Carro *carros, int quantidade) {
  printf("\nPlacas que começam com J e terminam com 0, 2, 4 ou 7:\n");

  for (int i = 0; i < quantidade; i++) {
    if (carros[i].placa[0] == 'J' &&
        (carros[i].placa[6] == '0' || carros[i].placa[6] == '2' ||
         carros[i].placa[6] == '4' || carros[i].placa[6] == '7')) {
      printf("- Placa: %s, Proprietário: %s\n", carros[i].placa,
             carros[i].proprietario);
    }
  }
}

int somaDigitos(char *str) {
  int soma = 0;
  for (int i = 0; i < strlen(str); i++) {
    if (isdigit(str[i])) {
      soma += str[i] - '0';
    }
  }
  return soma;
}

void listaModeloCorVogalPar(Carro *carros, int quantidade) {
  printf("\nModelo e cor dos carros com placas que têm segunda letra vogal e "
         "soma dos valores numéricos é par:\n");

  for (int i = 0; i < quantidade; i++) {
    if (strchr("aeiouAEIOU", carros[i].placa[1]) != NULL &&
        somaDigitos(carros[i].placa) % 2 == 0) {
      printf("- Modelo: %s, Cor: %s\n", carros[i].modelo, carros[i].cor);
    }
  }
}

void trocaDono(Carro *carros, int quantidade) {
  char chassi[100];
  int encontrado = 0;

  printf("Digite o número do chassi: ");
  fgets(chassi, sizeof(chassi), stdin);

  for (int i = 0; i < quantidade; i++) {
    if (strcmp(carros[i].chassi, chassi) == 0 &&
        strchr(carros[i].placa, '0') == NULL) {
      printf("Digite o novo nome do proprietário para o carro com chassi %s: ",
             chassi);
      fgets(carros[i].proprietario, sizeof(carros[i].proprietario), stdin);
      encontrado = 1;
      break;
    }
  }

  if (!encontrado) {
    printf(
        "Carro com chassi %s não encontrado ou possui dígito zero na placa.\n",
        chassi);
  }
}
