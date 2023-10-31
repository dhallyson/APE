#include <stdio.h>

int main() {
    int capacidade = 100;
    int idade, somaIdadeRuim = 0, numRuim = 0, numOtimo = 0, numBom = 0, numRegular = 0, numPessimo = 0;
    int maiorIdadeOtimo = 0, maiorIdadeRuim = 0;

    for (int i = 1; i <= capacidade; i++) {
        printf("Informe a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        printf("Informe a opinião da pessoa %d (A, B, C, D, ou E): ", i);
        char opiniao;
        scanf(" %c", &opiniao);

        if (opiniao == 'A') {
            numOtimo++;
            if (idade > maiorIdadeOtimo) {
                maiorIdadeOtimo = idade;
            }
        } else if (opiniao == 'B') {
            numBom++;
        } else if (opiniao == 'C') {
            numRegular++;
        } else if (opiniao == 'D') {
            numRuim++;
            somaIdadeRuim += idade;
            if (idade > maiorIdadeRuim) {
                maiorIdadeRuim = idade;
            }
        } else if (opiniao == 'E') {
            numPessimo++;
            if (idade > maiorIdadeRuim) {
                maiorIdadeRuim = idade;
            }
        }
    }

    float diferencaPercentual = ((float)numBom / capacidade - (float)numRegular / capacidade) * 100.0;
    float mediaIdadeRuim = (numRuim > 0) ? (float)somaIdadeRuim / numRuim : 0;

    printf("Quantidade de respostas Ótimo: %d\n", numOtimo);
    printf("Diferença percentual entre respostas Bom e Regular: %.2f%%\n", diferencaPercentual);
    printf("Média de idade das pessoas que responderam Ruim: %.2f\n", mediaIdadeRuim);
    printf("Percentagem de respostas Péssimo: %.2f%%\n", ((float)numPessimo / capacidade) * 100.0);
    printf("Maior idade que respondeu Péssimo: %d\n", maiorIdadeRuim);
    printf("Diferença de idade entre a maior idade que respondeu Ótimo e a maior idade que respondeu Ruim: %d anos\n", maiorIdadeOtimo - maiorIdadeRuim);

    return 0;
}
