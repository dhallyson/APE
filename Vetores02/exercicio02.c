#include <stdio.h>

int main() {
    int numeros[20];
    int unicos[20];
    int num_repetidos = 0;

    printf("Digite 20 números inteiros:\n");

    // Ler os 20 números inteiros
    for (int i = 0; i < 20; i++) {
        scanf("%d", &numeros[i]);
    }

    // Verificar números repetidos e armazenar os únicos em 'unicos'
    for (int i = 0; i < 20; i++) {
        int repetido = 0;

        for (int j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) {
                repetido = 1;
            }
        }

        if (!repetido) {
            unicos[num_repetidos] = numeros[i];
            num_repetidos++;
        }
    }

    printf("Números únicos: ");

    for (int i = 0; i < num_repetidos; i++) {
        printf("%d ", unicos[i]);
    }

    printf("\n");

    return 0;
}
