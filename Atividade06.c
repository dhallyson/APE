#include<stdio.h>
#include<math.h>

main(){

    // Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área 

    // Definição de variáveis
    float circuloRaio, circuloArea;

    // Scan do raio

    printf("Digite raio do circulo: ");
    scanf("%f", &circuloRaio);

    // Processamento dos valores

    // Calculo 01: Descobrindo a área circulo
    circuloArea = 3.14 * pow(circuloRaio, 2);

    // Mostra os resultados

    printf("A área do circulo é %.1f \n", circuloArea);
    

}