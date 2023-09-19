#include <stdio.h>

main() {

  int codFruta, qtdFruta, value = 0;
  
  do{
    printf("1 => ABACAXI – 5,00 a unidade\n");
    printf("2 => MAÇA – 1,00 a unidade\n");
    printf("3 => PERA – 4,00 a unidade\n");
    printf("0 => Para sair\n");
    printf("Difite o código da fruta: ");

    scanf("%d", &codFruta);
    
    printf("Quantidade da fruta: ");
    scanf("%d", &qtdFruta);

    if(codFruta == 1){
      value += 5 * qtdFruta;
    }else if(codFruta == 2){
      value += 1 * qtdFruta;
    }else if(codFruta == 3){
      value += 4 * qtdFruta;
    }
    
  }while(codFruta != 0);

  printf("O valor total da compra é %d", value);
  
}
