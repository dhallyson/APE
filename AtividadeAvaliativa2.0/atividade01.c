#include <stdio.h>

int validaQuantidade(int numeroPecas);
float calculaSalario(int numeroPecas);
void mostraFinal(float numeroPecas);

main(void) {
  float salarioBase = 600, salarioFinal;
  int numeroPecas, calc50, calc30;

  printf("Digite a quantidade de peças fabricadas: ");
  scanf("%d", &numeroPecas);
  
  mostraFinal(numeroPecas);
}

int validaQuantidade(int numeroPecas){
  if(numeroPecas >= 0){
    return(numeroPecas);
  }else{
    return 1;
  }
}

float calculaSalario(int numeroPecas){
  float salarioFinal;

  if(numeroPecas < 50){
    return salarioFinal = 600.00;

  }else if(numeroPecas >= 50 && numeroPecas <= 80){

    int calc50 = numeroPecas - 50;
    float salarioFinal = 600.00 + calc50 * 0.50;
    return salarioFinal;

  }else if(numeroPecas > 80){

    float calc80 = (numeroPecas - 80) * 0.75;
    float salarioFinal = calc80 + 600 + 15.50;
    return salarioFinal;

  }
}

void mostraFinal(float numeroPecas){

  if(validaQuantidade(numeroPecas) == 1){
    printf("Quantidade inválida");
  }else{
    printf("O salário final é: %.2f", calculaSalario(numeroPecas));
  }
}

