#include<stdio.h>
#include<math.h>

main(){

    // Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.

    // Definição de variáveis
    float valorReais, cotacaoDolar, conversaoDolar;

    // Scan dos números

    printf("Digite quantos reais você tem: ");
    scanf("%f", &valorReais);

    printf("Digite a cotação do dolar: ");
    scanf("%f", &cotacaoDolar);

    // Processamento dos valores

    conversaoDolar = valorReais / cotacaoDolar;

    // Mostra os resultados

    printf("Multiplicando %.2f pela cotação atual do dolar que é %.2f conseguimos chegar ao valor do real convertido em dolar que é %.2f\n", valorReais, cotacaoDolar, conversaoDolar);
    

}