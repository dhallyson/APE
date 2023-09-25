#include <math.h>
#include <stdio.h>

// Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10
// metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e
// imprima quantos anos serão necessários para que Zé seja maior que Chico.

main() {
  int tempoAnos = 0;
  float alturaChico = 1.5, cresceChico = 0.2, alturaZe = 1.10, cresceZe = 0.3;

  while (alturaZe <= alturaChico) {
    tempoAnos++;
    alturaChico += cresceChico;
    alturaZe += cresceZe;
  }

  printf("Tempo para ficar maior são de %d anos", tempoAnos);
}
