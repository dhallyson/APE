#include<stdio.h>

main(){
    float media;
    int aprovado = 7, reprovado = 4;


    printf("Digite sua media: ");
    scanf("%f", &media);

    if(media >= aprovado){
        printf("Você está aprovado");
    }else if(media < reprovado){
        printf("Você está reprovado");
    }else{
        printf("Você está de recuperação");
    }

}
