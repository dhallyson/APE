#include <math.h>>
#include <stdio.h>

// Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada
// aluno, calcule a média ponderada.
// Fórmula: MP = ( n1*2 + n2*4 + n3*3 ) / 10

main() {

  float nota01, nota02, nota03, mediaGeral, mediaAluno, mediaTurma = 0;
  int aluno = 1, alunoLimite = 30;

  do {
    printf("\n--- Notas do %dº aluno ---\n", aluno);
    printf("Digite 1º nota: ");
    scanf("%f", &nota01);
    fflush(stdin);

    printf("Digite 2º nota: ");
    scanf("%f", &nota02);
    fflush(stdin);

    printf("Digite 3º nota: ");
    scanf("%f", &nota03);
    fflush(stdin);

    mediaAluno = ((nota01 * 2) + (nota02 * 4) + (nota03 * 3)) / 9;

    mediaTurma += mediaAluno;

    if (mediaAluno >= 7) {
      printf("\nAprovado média %.2f\n", mediaAluno);
    } else {
      printf("\nReprovado média %.2f\n", mediaAluno);
    }

    aluno++;

  } while (aluno <= alunoLimite);

  mediaGeral = mediaTurma / alunoLimite;

  printf("\nMédia geral da turma %.1f", mediaGeral);
}
