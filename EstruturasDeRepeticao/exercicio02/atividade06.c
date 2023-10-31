#include <stdio.h>

int main() {
    char resposta;
    
    do {
        int mes, ano, dias;

        printf("Digite o mês (1-12): ");
        scanf("%d", &mes);

        if (mes < 1 || mes > 12) {
            printf("Mês inválido. Deve estar entre 1 e 12.\n");
            continue;
        }

        printf("Digite o ano: ");
        scanf("%d", &ano);

        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
            // Ano bissexto
            int diasPorMes[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            dias = diasPorMes[mes - 1];
        } else {
            // Ano não bissexto
            int diasPorMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            dias = diasPorMes[mes - 1];
        }

        printf("O mês %d/%d tem %d dias.\n", mes, ano, dias);

        printf("VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');

    return 0;
}
