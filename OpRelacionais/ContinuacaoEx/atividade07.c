#include <stdio.h>

main() {
  /*
  Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A
  primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final,
  mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A
  nota para aprovação deve ser igual ou  superior a 7.0 pontos.
  */

  int nota01, nota02, nota03;
  float media;

  printf("Digite a primeira nota: ");
  scanf("%d", &nota01);
  fflush(stdin);

  printf("Digite a segunda nota: ");
  scanf("%d", &nota02);
  fflush(stdin);

  printf("Digite a terceira nota: ");
  scanf("%d", &nota03);
  fflush(stdin);

  media = ((nota01 * 1) + (nota02 * 1) + (nota03 * 2)) / (1 + 1 + 2);

  if(media >= 7){
    printf("Aluno aprovado com média %.1f", media);
  }else{
    printf("Aluno reprovado");
  }
}
