#include <stdio.h>

int main() {
    int vetor[10];
    
    // Ler os valores do vetor
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Verificar se existem valores iguais
    int temValoresIguais = 0; // Variável para indicar se há valores iguais

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("Valores iguais encontrados: %d\n", vetor[i]);
                temValoresIguais = 1;
            }
        }
    }

    if (!temValoresIguais) {
        printf("Não foram encontrados valores iguais no vetor.\n");
    }

    return 0;
}
