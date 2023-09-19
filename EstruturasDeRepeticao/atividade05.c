#include <stdio.h>

main() {
  int num, contador, soma = 0;
  
  for(num=0;num<=50;num++){
    soma += num * 2;
    printf("%d\n", soma);      
  }
}
