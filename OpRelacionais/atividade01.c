#include<stdio.h>

main(){
    int idade;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Você já é maior de idade!");
    }else{
        printf("Você ainda é menor de idade!");
    }

}
