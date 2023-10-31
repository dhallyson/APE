#include <stdio.h>
#include <string.h>

int main() {
    int votos[5] = {0}; // Índices 0 a 4 representam as jogadoras
    int totalMulheres = 0;
    int totalMaioresIdade = 0;
    int totalMenoresIdade = 0;
    int totalMartaVotaram = 0;

    int numEntrevistados = 0;

    while (1) {
        char nome[50];
        int idade;
        char sexo;
        int voto;

        printf("Nome: ");
        scanf("%s", nome);

        if (strcmp(nome, "fim") == 0) {
            if (numEntrevistados >= 50) {
                break;
            } else {
                printf("Número de entrevistados insuficiente (mínimo 50).\n");
                continue;
            }
        }

        printf("Idade: ");
        scanf("%d", &idade);

        if (idade <= 12) {
            printf("Idade deve ser maior que 12 anos.\n");
            continue;
        }

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo != 'M' && sexo != 'F') {
            printf("Sexo deve ser M ou F.\n");
            continue;
        }

        printf("Voto (1-Sam, 2-Alex, 3-Dzsenifer, 4-Amandine, 5-Marta): ");
        scanf("%d", &voto);

        if (voto < 1 || voto > 5) {
            printf("Voto deve estar entre 1 e 5.\n");
            continue;
        }

        // Contabilizando votos
        votos[voto - 1]++; // Os votos são armazenados nos índices de 0 a 4

        // Atualizando estatísticas
        if (sexo == 'F') {
            totalMulheres++;
        }

        if (idade >= 18) {
            totalMaioresIdade++;
        } else {
            totalMenoresIdade++;
        }

        if (voto == 5 && idade >= 18) {
            totalMartaVotaram++;
        }

        numEntrevistados++;
    }

    // Exibir a quantidade de votos para cada jogadora
    printf("Votos para Sam Kerr: %d\n", votos[0]);
    printf("Votos para Alex Morgan: %d\n", votos[1]);
    printf("Votos para Dzsenifer Marozsan: %d\n", votos[2]);
    printf("Votos para Amandine Henry: %d\n", votos[3]);
    printf("Votos para Marta Vieira: %d\n", votos[4]);

    // Determinar a jogadora mais votada
    int maxVotos = votos[0];
    for (int i = 1; i < 5; i++) {
        if (votos[i] > maxVotos) {
            maxVotos = votos[i];
        }
    }

    printf("Jogadoras mais votadas:\n");
    for (int i = 0; i < 5; i++) {
        if (votos[i] == maxVotos) {
            switch (i) {
                case 0:
                    printf("Sam Kerr\n");
                    break;
                case 1:
                    printf("Alex Morgan\n");
                    break;
                case 2:
                    printf("Dzsenifer Marozsan\n");
                    break;
                case 3:
                    printf("Amandine Henry\n");
                    break;
                case 4:
                    printf("Marta Vieira\n");
                    break;
            }
        }
    }

    // Exibir as estatísticas sobre os entrevistados
    printf("Total de mulheres: %d\n", totalMulheres);
    printf("Total de homens: %d\n", numEntrevistados - totalMulheres);
    printf("Total de maiores de idade: %d\n", totalMaioresIdade);
    printf("Total de menores de idade: %d\n", totalMenoresIdade);
    printf("Total de pessoas que votaram na Marta Vieira e são maiores de idade: %d\n", totalMartaVotaram);

    return 0;
}
