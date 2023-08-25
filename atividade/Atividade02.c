#include<stdio.h>
#include<math.h>

main(){

    // Escreva um programa que receba um número qualquer e mostre o seu dobro

    // Definição de variáveis
    int num1, dobro;

    // Scan dos números

    printf("Digite o número que deseja saber o dobro: ");
    scanf("%d", &num1);

    // Processamento dos números

    dobro = num1 * 2;

    // Mostra os resultados

    printf("Dobro de %d = %d\n", num1, dobro);
    

}
