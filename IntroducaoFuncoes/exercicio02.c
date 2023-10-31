#include <stdio.h>
void imprimirMesEQuantidadeDias(int numero);

int main() {
    int numero;
    
    printf("Digite um número entre 1 e 12: ");
    scanf("%d", &numero);

    imprimirMesEQuantidadeDias(numero);

    return 0;
}

void imprimirMesEQuantidadeDias(int numero) {
    if (numero < 1 || numero > 12) {
        printf("Número fora do intervalo válido (1 a 12).\n");
    } else {
        char nomesMeses[] = {
            "janeiro", "fevereiro", "março", "abril", "maio", "junho",
            "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
        };
        int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        printf("Mês: %s\n", nomesMeses[numero - 1]);
        printf("Quantidade de dias: %d\n", diasPorMes[numero - 1]);
    }
}
