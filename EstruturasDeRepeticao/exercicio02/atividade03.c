#include <stdio.h>

int calcularFibonacci(int n);

int main() {
    int n;

    printf("Digite o valor de n (número não negativo): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, insira um número não negativo.\n");
    } else {
        int resultado = calcularFibonacci(n);
        printf("O %dº termo da sequência de Fibonacci é: %d\n", n, resultado);
    }

    return 0;
}

int calcularFibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0;
        int b = 1;
        int resultado = 0;
        
        for (int i = 2; i <= n; i++) {
            resultado = a + b;
            a = b;
            b = resultado;
        }
        
        return resultado;
    }
}
