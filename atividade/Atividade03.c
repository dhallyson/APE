#include<stdio.h>
#include<math.h>

main(){

    // Dadas as medidas de uma sala, informe sua área

    // Definição de variáveis
    float largura, comprimento, area;

    // Scan dos números

    printf("Digite a largura da sala: ");
    scanf("%f", &largura);

    printf("Digite o comprimento da sala: ");
    scanf("%f", &comprimento);

    // Processamento dos números

    area = largura * comprimento;

    // Mostra os resultados

    printf("Multiplicando %.2f * %.2f conseguimos chegar ao valor %.2f que é a área da sala\n", largura, comprimento, area);
    

}
