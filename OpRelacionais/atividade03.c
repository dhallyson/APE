#include<stdio.h>

main(){
    float altura, alturaCondicao = 1.80;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if(altura > alturaCondicao){
        printf("Você tem mais de 1.80");
    }else{
        printf("Você tem menos de 1.80");
    }

}