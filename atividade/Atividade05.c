#include<stdio.h>
#include<math.h>

main(){

    /*
    Faça um programa em que o usuário digite o custo de uma determinada
    mercadoria, em seguida, adiciona-se ao custo o valor do frete e
    despesas eventuais (também solicitadas pelo teclado). Para concluir,
    o programa pergunta qual o valor de venda e indica a percentagem de
    lucro da mercadoria.
    */

    // Definição de variáveis
    float produtoCusto, produtoFrete, produtoEmbalagem, produtoValorVenda, produtoCustoBruto, produtoLucroLiquido;
    int produtoLucroPorcentagem;

    // Scan dos números

    printf("Digite o custo do produto: ");
    scanf("%f", &produtoCusto);
    fflush(stdin);

    printf("Digite o valor gasto com frete: ");
    scanf("%f", &produtoFrete);
    fflush(stdin);

    printf("Digite o valor gasto com embalagem: ");
    scanf("%f", &produtoEmbalagem);
    fflush(stdin);

    printf("Digite o valor de venda do produto: ");
    scanf("%f", &produtoValorVenda);
    fflush(stdin);

    // Processamento dos valores

    // Calculo 01: Somando todos os custos do produto
    produtoCustoBruto = produtoCusto + produtoFrete + produtoEmbalagem;
    
    // Calculo 02: Descobrindo o lucro da venda
    produtoLucroLiquido = produtoValorVenda - produtoCustoBruto;
    
    // Calculo 02: Calculando a porcentagem de lucro
    produtoLucroPorcentagem = (produtoLucroLiquido / produtoValorVenda) * 100;
    

    // Mostra o resultado
    printf("O vendedor está ganhando %d por cento na venda do produto de %f\n", produtoLucroPorcentagem, produtoValorVenda);
    

}
