#include <stdio.h>

main() {

  int numero = 123;
  float real = 12.3;
  char letra = 'A';

  int *pNumero;
  float *pReal;
  char *pLetra;

  pNumero = &numero;
  pReal = &real;
  pLetra = &letra;

  printf("Numero: %d\n", *pNumero);
  printf("Real: %.2f\n", *pReal);
  printf("Letra: %c\n", *pLetra);

  *pNumero = 456;
  *pReal = 45.6;
  *pLetra = 'B';

  printf("Numero: %d\n", *pNumero);
  printf("Real: %.2f\n", *pReal);
  printf("Letra: %c\n", *pLetra);
}
