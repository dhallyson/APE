#include<stdio.h>
#include<math.h>

main(){

    /*
    Faça um algoritmo que leia a idade de uma pessoa expressa em anos,
    meses e dias e escreva a idade dessa pessoa expressa apenas em dias.
    Considerar ano com 365 dias e mês com 30 dias.
    */

    // Definição de variáveis
    int nascimentoAno, nascimentoMes, nascimentoDia, nascimentoTotalDias;

    // Scan do ano

    printf("Anos de vida que você tem: ");
    scanf("%d", &nascimentoAno);
    fflush(stdin);

    // Scan do mês

    printf("Mêses de vida que você tem: ");
    scanf("%d", &nascimentoMes);
    fflush(stdin);

    // Scan do mês

    printf("Dias de vida que você tem: ");
    scanf("%d", &nascimentoDia);
    fflush(stdin);

    // Processamento dos valores

    // Calculo 01: Transformando ano em dias, meses em dias e somando mais os dias
    nascimentoTotalDias = (nascimentoAno * 365) + (nascimentoMes * 30) + nascimentoDia;

    // Mostra os resultados

    printf("Você tem %d dias de vida", nascimentoTotalDias);
    

}