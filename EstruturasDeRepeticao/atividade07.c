#include <stdio.h>

main() {
  char sexo, olhos, cabelos;
  int totalHabitantes = 0, totalEspecifico = 0, totalM = 0, totalF = 0,
      idade = 0;
  float salario, porcentagem;

    do{
        // Sexo do habitante
        do {
            printf("\nDigite o sexo M ou F: ");
            scanf("%c", &sexo);
            fflush(stdin);

            if (sexo != 'm' && sexo != 'f') {
                printf("\nDigite uma opção válida.");
            }

            if(sexo == 'm'){
                totalM++;
            }else if(sexo == 'f'){
                totalF++;
            }
            
        } while (sexo != 'm' && sexo != 'f');

        // Cor dos olhos
        do {
            printf("\nDigite a cor dos olhos A, V, C e P: ");
            scanf("%c", &olhos);
            fflush(stdin);

            if (olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p') {
                printf("\nDigite uma opção válida.");
            }
        } while (olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p');

        // Cor do cabelo
        do {
            printf("\nDigite a cor do cabelo L, C, P e R: ");
            scanf("%c", &cabelos);
            fflush(stdin);

            if (cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r') {
                printf("\nDigite uma opção válida.");
            }
        } while (cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r');

        // Idade
        do {
            printf("\nDigite a idade: ");
            scanf("%d", &idade);
            fflush(stdin);

            if (idade < 10 || idade > 100) {
                printf("\nDigite uma idade maior que 10 e menor que 100.");
            }
        } while (idade < 10 || idade > 100);

        // Salário
        do {
            printf("\nDigite o salário: ");
            scanf("%f", &salario);
            fflush(stdin);

            if (salario < 0) {
                printf("\nDigite um valor válido.");
            }
        } while (salario < 0);

        if(sexo == 'f' && (idade >= 18 && idade <= 35) && olhos == 'c' && cabelos == 'c' ){
            totalEspecifico++;
        }

    totalHabitantes++;

    printf("\nVocê deseja cadastrar um novo abitante 1 SIM -1 NÃO: ");
    scanf("%d", &idade);
    fflush(stdin);

    }while(idade != -1);

    porcentagem = (float) totalEspecifico / totalHabitantes * 100;

    printf("\nTotal de habitantes cadastrados: %d", totalHabitantes);
    printf("\nPorcentagem de pessoas específicas: %.2f", porcentagem);
    printf("\nTotal de mulheres %d\nTotal de homens %d", totalF, totalM);
}
