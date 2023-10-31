#include <stdio.h>
#include <ctype.h>

int main() {
    int numPessoas = 10;
    int numHomens = 0, numMulheres = 0;
    double somaAlturaHomens = 0, somaAlturaMulheres = 0, somaAlturaGrupo = 0;
    double somaPesoHomens = 0, somaPesoMulheres = 0, somaPesoGrupo = 0;

    for (int i = 1; i <= numPessoas; i++) {
        char nome[50];
        char sexo;
        double altura, peso;

        printf("Pessoa %d:\n", i);
        printf("Nome: ");
        scanf(" %s", nome);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        sexo = tolower(sexo); // Converter para minúsculo para facilitar comparações

        printf("Altura (em metros): ");
        scanf("%lf", &altura);

        printf("Peso (em kg): ");
        scanf("%lf", &peso);

        if (sexo == 'm') {
            numHomens++;
            somaAlturaHomens += altura;
            somaPesoHomens += peso;
        } else if (sexo == 'f') {
            numMulheres++;
            somaAlturaMulheres += altura;
            somaPesoMulheres += peso;
        }

        somaAlturaGrupo += altura;
        somaPesoGrupo += peso;
    }

    double alturaMediaHomens = numHomens > 0 ? somaAlturaHomens / numHomens : 0;
    double alturaMediaMulheres = numMulheres > 0 ? somaAlturaMulheres / numMulheres : 0;
    double alturaMediaGrupo = somaAlturaGrupo / numPessoas;

    double pesoMediaHomens = numHomens > 0 ? somaPesoHomens / numHomens : 0;
    double pesoMediaMulheres = numMulheres > 0 ? somaPesoMulheres / numMulheres : 0;
    double pesoMediaGrupo = somaPesoGrupo / numPessoas;

    printf("Número de homens: %d\n", numHomens);
    printf("Número de mulheres: %d\n", numMulheres);
    printf("Altura média dos homens: %.2lf metros\n", alturaMediaHomens);
    printf("Altura média das mulheres: %.2lf metros\n", alturaMediaMulheres);
    printf("Altura média do grupo: %.2lf metros\n", alturaMediaGrupo);
    printf("Peso médio dos homens: %.2lf kg\n", pesoMediaHomens);
    printf("Peso médio das mulheres: %.2lf kg\n", pesoMediaMulheres);
    printf("Peso médio do grupo: %.2lf kg\n", pesoMediaGrupo);

    return 0;
}
