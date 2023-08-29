#include<stdio.h>

main(){
    float salario, salarioMinimo = 1320.00;

    printf("Digite seu salário: R$ ");
    scanf("%f", &salario);

    if(salario > salarioMinimo){
        printf("Você recebe mais que o salário mínimo");
    }else{
        printf("Você não recebe mais que o salário mínimo");
    }

}