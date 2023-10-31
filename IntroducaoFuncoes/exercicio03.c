#include <stdio.h>

double converterFahrenheitParaCelsius(double temperaturaFahrenheit);

int main() {
    double temperaturaFahrenheit, temperaturaCelsius;
    
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%lf", &temperaturaFahrenheit);

    temperaturaCelsius = converterFahrenheitParaCelsius(temperaturaFahrenheit);

    printf("%.2lf graus Fahrenheit equivalem a %.2lf graus Celsius.\n", temperaturaFahrenheit, temperaturaCelsius);

    return 0;
}

double converterFahrenheitParaCelsius(double temperaturaFahrenheit) {
    double temperaturaCelsius = (temperaturaFahrenheit - 32.0) * (5.0/9.0);
    return temperaturaCelsius;
}
