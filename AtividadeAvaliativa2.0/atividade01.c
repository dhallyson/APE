#include <stdio.h>

int validaQuantidade(int numeroPecas){
  if(numeroPecas >= 0){
    return(numeroPecas);
  }else{
    printf("Quantidade inválida");
  }
}

calculaSalario(int numeroPecas){
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

mostraFinal(float salarioFinal){
  printf("O salário final é: %.2f", salarioFinal);
}

main(void) {
  float salarioBase = 600, salarioFinal;
  int numeroPecas, calc50, calc30;

  printf("Digite a quantidade de peças fabricadas: ");
  scanf("%d", &numeroPecas);
  
  // validaQuantidade(numeroPecas);
  calculaSalario(numeroPecas);
}


