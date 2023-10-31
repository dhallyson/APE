#include <stdio.h>

void opcaoParcelamento(float totalGasto, int numParcelas);
void opcaoDuasVezes(float totalGasto);
void opcaoAVista(float totalGasto);
char lerOpcao();
void imprimirOpcoes();

int main() {
    float totalGasto;
    printf("Total Gasto: R$ ");
    scanf("%f", &totalGasto);

    imprimirOpcoes();
    char opcao = lerOpcao();

    switch (opcao) {
        case 'a':
            opcaoAVista(totalGasto);
            break;
        case 'b':
            opcaoDuasVezes(totalGasto);
            break;
        case 'c':
            if (totalGasto > 100.00) {
                int numParcelas;
                printf("Digite o número de parcelas: ");
                scanf("%d", &numParcelas);
                if (numParcelas >= 3 && numParcelas <= 10) {
                    opcaoParcelamento(totalGasto, numParcelas);
                } else {
                    printf("Número de parcelas inválido.\n");
                }
            } else {
                printf("O valor da compra deve ser superior a R$ 100,00.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

void imprimirOpcoes() {
    printf("Opções de pagamento:\n");
    printf("a) À vista\n");
    printf("b) Em duas vezes\n");
    printf("c) De 3 a 10 vezes\n");
    printf("Escolha a opção desejada: ");
}

char lerOpcao() {
    char opcao;
    scanf(" %c", &opcao);
    return opcao;
}

void opcaoAVista(float totalGasto) {
    float desconto = totalGasto * 0.10;
    printf("Total com 10%% de desconto: R$ %.2f\n", totalGasto - desconto);
}

void opcaoDuasVezes(float totalGasto) {
    printf("Total em duas vezes: 2x de R$ %.2f\n", totalGasto / 2);
}

void opcaoParcelamento(float totalGasto, int numParcelas) {
    float juros = 0.03;
    float valorParcela = (totalGasto + (totalGasto * juros)) / numParcelas;
    printf("Total em %d vezes com 3%% de juros ao mês: %d x de R$ %.2f\n", numParcelas, numParcelas, valorParcela);
}
