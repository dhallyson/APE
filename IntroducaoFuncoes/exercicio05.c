#include <stdio.h>
#include <math.h>

double calcularVolumeEsfera(double raio);

int main() {
    double raio, volume, pi;
    
    printf("Digite o valor de pi: ");
    scanf("%lf", &pi);

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volume = calcularVolumeEsfera(raio, pi);

    printf("O volume da esfera é %.2lf unidades cúbicas.\n", volume);

    return 0;
}

double calcularVolumeEsfera(double raio, double pi) {
    double volume = (4.0 / 3.0) * pi * raio * raio * raio;
    return volume;
}
