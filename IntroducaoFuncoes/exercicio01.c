#include <stdio.h>
void maior(int n1, int n2);

main() {
  maior(3, 4);
}

void maior(int n1, int n2) {
  if(n1 > n2){
    printf("%d é maior que %d", n1, n2);
  }else if(n2 > n1){
    printf("%d é maior que %d", n2, n1);
  }else{
    printf("Os números são iguais");
  }
}
