#include<stdio.h>

main(){
    float peso;
    int pesoCondicao = 60;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if(peso < pesoCondicao){
        printf("Você pesa menos que %dkg", pesoCondicao);
    }else{
        printf("Você pesa mais que %dkg", pesoCondicao);
    }

}