#include <stdio.h>

int main() {
    int totalUsuarios = 50;
    int elevadorA_M = 0, elevadorA_V = 0, elevadorA_N = 0;
    int elevadorB_M = 0, elevadorB_V = 0, elevadorB_N = 0;
    int elevadorC_M = 0, elevadorC_V = 0, elevadorC_N = 0;
    int periodoMaisUsadoTotal = 0;
    int periodoMaisUsadoElevador = 0;
    int elevadorMaisUsadoTotal = 0;
    int elevadorMaisUsadoPeriodo = 0;

    for (int i = 1; i <= totalUsuarios; i++) {
        char elevador, periodo;
        printf("Para o usuário %d:\n", i);
        printf("Informe o elevador mais utilizado (A, B ou C): ");
        scanf(" %c", &elevador);
        printf("Informe o período mais utilizado (M, V ou N): ");
        scanf(" %c", &periodo);

        if (elevador == 'A') {
            if (periodo == 'M') {
                elevadorA_M++;
            } else if (periodo == 'V') {
                elevadorA_V++;
            } else if (periodo == 'N') {
                elevadorA_N++;
            }
        } else if (elevador == 'B') {
            if (periodo == 'M') {
                elevadorB_M++;
            } else if (periodo == 'V') {
                elevadorB_V++;
            } else if (periodo == 'N') {
                elevadorB_N++;
            }
        } else if (elevador == 'C') {
            if (periodo == 'M') {
                elevadorC_M++;
            } else if (periodo == 'V') {
                elevadorC_V++;
            } else if (periodo == 'N') {
                elevadorC_N++;
            }
        }
    }

    // Encontrar o período mais usado de todos
    if (elevadorA_M + elevadorB_M + elevadorC_M > periodoMaisUsadoTotal) {
        periodoMaisUsadoTotal = elevadorA_M + elevadorB_M + elevadorC_M;
        periodoMaisUsadoElevador = 'M';
    }
    if (elevadorA_V + elevadorB_V + elevadorC_V > periodoMaisUsadoTotal) {
        periodoMaisUsadoTotal = elevadorA_V + elevadorB_V + elevadorC_V;
        periodoMaisUsadoElevador = 'V';
    }
    if (elevadorA_N + elevadorB_N + elevadorC_N > periodoMaisUsadoTotal) {
        periodoMaisUsadoTotal = elevadorA_N + elevadorB_N + elevadorC_N;
        periodoMaisUsadoElevador = 'N';
    }

    // Encontrar o elevador mais frequentado
    if (elevadorA_M + elevadorA_V + elevadorA_N > elevadorMaisUsadoTotal) {
        elevadorMaisUsadoTotal = elevadorA_M + elevadorA_V + elevadorA_N;
        elevadorMaisUsadoPeriodo = 'A';
    }
    if (elevadorB_M + elevadorB_V + elevadorB_N > elevadorMaisUsadoTotal) {
        elevadorMaisUsadoTotal = elevadorB_M + elevadorB_V + elevadorB_N;
        elevadorMaisUsadoPeriodo = 'B';
    }
    if (elevadorC_M + elevadorC_V + elevadorC_N > elevadorMaisUsadoTotal) {
        elevadorMaisUsadoTotal = elevadorC_M + elevadorC_V + elevadorC_N;
        elevadorMaisUsadoPeriodo = 'C';
    }

    // Calcular a diferença percentual entre o mais usado e o menos usado dos horários
    int menorPeriodoTotal = elevadorA_M + elevadorB_M + elevadorC_M;
    if (elevadorA_V + elevadorB_V + elevadorC_V < menorPeriodoTotal) {
        menorPeriodoTotal = elevadorA_V + elevadorB_V + elevadorC_V;
    }
    if (elevadorA_N + elevadorB_N + elevadorC_N < menorPeriodoTotal) {
        menorPeriodoTotal = elevadorA_N + elevadorB_N + elevadorC_N;
    }

    double diferencaPercentual = ((double)(periodoMaisUsadoTotal - menorPeriodoTotal) / totalUsuarios) * 100.0;

    // Calcular a percentagem sobre o total de serviços prestados do elevador de média utilização
    int elevadorMedioTotal = 0;
    if (elevadorA_M + elevadorA_V + elevadorA_N < elevadorB_M + elevadorB_V + elevadorB_N && elevadorA_M + elevadorA_V + elevadorA_N < elevadorC_M + elevadorC_V + elevadorC_N) {
        elevadorMedioTotal = elevadorA_M + elevadorA_V + elevadorA_N;
    } else if (elevadorB_M + elevadorB_V + elevadorB_N < elevadorA_M + elevadorA_V + elevadorA_N && elevadorB_M + elevadorB_V + elevadorB_N < elevadorC_M + elevadorC_V + elevadorC_N) {
        elevadorMedioTotal = elevadorB_M + elevadorB_V + elevadorB_N;
    } else {
        elevadorMedioTotal = elevadorC_M + elevadorC_V + elevadorC_N;
    }

    double percentagemElevadorMedio = ((double)elevadorMedioTotal / totalUsuarios) * 100.0;

    printf("O período mais usado de todos é: %c (%d vezes)\n", periodoMaisUsadoElevador, periodoMaisUsadoTotal);
    printf("O elevador mais frequentado é: %c (%d vezes)\n", elevadorMaisUsadoPeriodo, elevadorMaisUsadoTotal);
    printf("Diferença percentual entre o mais usado e o menos usado: %.2lf%%\n", diferencaPercentual);
    printf("Percentagem sobre o total de serviços prestados do elevador de média utilização: %.2lf%%\n", percentagemElevadorMedio);

    return 0;
}
