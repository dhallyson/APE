#include <stdio.h>
#include <math.h>

double calcularVolumeCilindro(double raio, double altura);

int main() {
    double raio, altura, volume;
    
    printf("Digite o raio do cilindro: ");
    scanf("%lf", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%lf", &altura);

    volume = calcularVolumeCilindro(raio, altura);

    printf("O volume do cilindro é %.2lf unidades cúbicas.\n", volume);

    return 0;
}

double calcularVolumeCilindro(double raio, double altura) {
    double volume = M_PI * pow(raio, 2) * altura;
    return volume;
}
