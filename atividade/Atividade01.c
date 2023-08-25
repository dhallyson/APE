#include<stdio.h>
#include<math.h>

main(){

    // Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.

    // Definição de variáveis
    int num1, num2, soma, subtracao, multiplicacao, divisao;

    // Scan dos números

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Processamento dos números

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    // Mostra os resultados

    printf("Soma: %d + %d = %d\n", num1, num2, soma);
    printf("Subtracao: %d - %d = %d\n", num1, num2, subtracao);
    printf("Multiplicacao: %d * %d = %d\n", num1, num2, multiplicacao);
    printf("Divisao: %d / %d = %d\n", num1, num2, divisao);
    

}
