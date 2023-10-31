#include <stdio.h>
#include <math.h>

double calcularVolumeEsfera(double raio);

int main() {
    double raio, volume;
    
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volume = calcularVolumeEsfera(raio);

    printf("O volume da esfera é %.2lf unidades cúbicas.\n", volume);

    return 0;
}

double calcularVolumeEsfera(double raio) {
    double volume = (4.0 / 3.0) * M_PI * pow(raio, 3);
    return volume;
}
