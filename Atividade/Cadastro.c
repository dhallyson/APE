#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAM 1000

struct Usuarios {
    int id;
    int vacina;
    char nome[50];
    char email[50];
    char sexo[20];
    char endereco[50];
    double altura;
};

int mostraOpcoes(int *opc);
void cadastrar(struct Usuarios usuario[], int);
void editar(struct Usuarios usuario[], int);
void excluir(struct Usuarios usuario[], int *i);
void buscar(struct Usuarios usuario[], int);
void mostrar(struct Usuarios usuario[], int);
void verificaEmail(struct Usuarios usuario[], int);
void verificaSexo(struct Usuarios usuario[], int);
void verificaAltura(struct Usuarios usuario[], int);
void verificaVacina(struct Usuarios usuario[], int);
int escolherEdicao(struct Usuarios usuario[], int);

int main() {
    int opc;
    int i = 0;
    struct Usuarios usuario[TAM];

    do {
        switch (mostraOpcoes(&opc)){
        case 1:
            cadastrar(usuario,i);
            i++;
            break;
        case 2:
            editar(usuario,i);
            break;
        case 3:
            excluir(usuario,&i);
            break;
        case 4:
            buscar(usuario,i);
            break;
        case 5:
            mostrar(usuario,i);
            break;
        case 0:
            printf("Saindo... Ate logo!");
            break;
        default:
            printf("Opcao invalida... Por favor tente novamente!");
            break;
        }
    } while (opc != 0);

return 0;
}

int mostraOpcoes(int *opc){
    printf("---ESCOLHA A OPERACAO DESEJADA---\n");
    printf("1. Incluir Usuario\n");
    printf("2. Editar Usuario\n");
    printf("3. Excluir Usuario\n");
    printf("4. Buscar Usuario\n");
    printf("5. Mostrar Usuarios\n");
    printf("0. Sair\n");
    scanf("%i", &*opc);
    system("cls");
    return *opc;
}

void cadastrar(struct Usuarios usuario[], int i){
    int vacina;
    double altura;
    srand((unsigned int)time(NULL));
    usuario[i].id = rand();
    printf("ID GERADO: %i\n", usuario[i].id); fflush(stdin);
    printf("Nome: "); fgets(usuario[i].nome,sizeof(usuario[i].nome),stdin); fflush(stdin);
    printf("Email: "); fgets(usuario[i].email,sizeof(usuario[i].email),stdin); fflush(stdin);
    verificaEmail(usuario,i);
    printf("\nSexo: "); fgets(usuario[i].sexo,sizeof(usuario[i].sexo),stdin); fflush(stdin);
    verificaSexo(usuario,i);
    printf("\nEndereco: "); fgets(usuario[i].endereco,sizeof(usuario[i].endereco),stdin); fflush(stdin);
    printf("Altura: "); scanf("%lf", &altura); fflush(stdin);
    usuario[i].altura = altura;
    verificaAltura(usuario,i); fflush(stdin);
    printf("\nVacina: "); scanf("%i", &vacina); fflush(stdin);
    usuario[i].vacina = vacina;
    printf("Cadastro concluido com sucesso!\n");
    system("pause");
    system("cls");
}

void verificaEmail(struct Usuarios usuario[], int i){
    while (strchr(usuario[i].email,'@') == NULL){
        printf("Email invalido, digite novamente: "); fgets(usuario[i].email,sizeof(usuario[i].email),stdin);
    }
    printf("(Email verificado com sucesso)");
}

void verificaSexo(struct Usuarios usuario[], int i){
    do {
        if (strcmp(usuario[i].sexo, "Masculino")){
            printf("(Sexo verificado com sucesso)");
            break;
        } else if (strcmp(usuario[i].sexo, "Feminino")) {
            printf("(Sexo verificado com sucesso)");
            break;
        } else if (strcmp(usuario[i].sexo, "Indiferente")) {
            printf("(Sexo verificado com sucesso)");
            break;
        } else {
            printf("Sexo invalido, digite novamente: "); fgets(usuario[i].email,sizeof(usuario[i].email),stdin);
        }
    } while (1);
}

void verificaAltura(struct Usuarios usuario[], int i){
    while (usuario[i].altura < 1.00 || usuario[i].altura > 2.00){
        printf("Altura invalida, digite novamente: "); scanf("%lf", &usuario[i].altura);
    }
    printf("(Altura verificada com sucesso)");
}

void verificaVacina(struct Usuarios usuario[], int i){
    while (usuario[i].vacina != 1 && usuario[i].vacina != 0){
        printf("Vacina invalida, digite novamente: "); scanf("%i", &usuario[i].vacina);
    }
    printf("Vacina verificada com sucesso!");
}

void editar(struct Usuarios usuario[], int i){
    int id,j;
    printf("ID: "); scanf("%i", &id);

    for (int k = 0; k < i; k++) {
        if (id == usuario[i].id){
            printf("Usuario Encontrado!\n");
            j = i;
            break;
        }
    }
    do {
        printf("Alterando usuario...");
    } while (escolherEdicao(usuario,j) != 0);
    system("pause");
    system("cls");
    
}

int escolherEdicao(struct Usuarios usuario[], int j){
    int opc;
    printf("\n---OQUE VOCE DESEJA ALTERAR---\n");
    printf("1. Nome\n");
    printf("2. Email\n");
    printf("3. Sexo\n");
    printf("4. Endereco\n");
    printf("5. Altura\n");
    printf("6. Vacina\n");
    printf("0. Sair\n");
    scanf("%i", &opc);

    switch (opc){
        char string[50];
        case 1:
            fflush(stdin);
            printf("\nNome: "); fgets(string,sizeof(string),stdin);
            strcpy(usuario[j].nome,string);
            break;
        case 2:
            fflush(stdin);
            printf("\nEmail: "); fgets(string,sizeof(string),stdin); fflush(stdin);
            strcpy(usuario[j].email,string);
            break;
        case 3:
            fflush(stdin);
            printf("\nSexo: "); fgets(string,sizeof(string),stdin); fflush(stdin);
            strcpy(usuario[j].sexo,string);
            break;
        case 4:
            fflush(stdin);
            printf("\nEndereco: "); fgets(string,sizeof(string),stdin); fflush(stdin);
            strcpy(usuario[j].endereco,string);
            break;
        case 5:
            fflush(stdin);
            printf("\nAltura: "); scanf("%lf", &usuario[j].altura);
            break;
        case 6:
            fflush(stdin);
            printf("\nVacina: "); scanf("%i", &usuario[j].vacina);
            break;
        case 0:
            printf("\nSaindo da edicao...");
            break;
        default:
            printf("\nOpcao invalida, digite novamente...");
            break;
    }
    system("cls");
    return opc;
}

void excluir(struct Usuarios usuario[],int *i){
    int id;
    printf("ID: "); scanf("%i", &id);

    for (int m = 0; m < TAM; m++) {
        if (id == usuario[m].id){
            printf("Usuario Encontrado!\n");
            printf("Excluindo Usuario...\n");
            for (int k = m; k <= *i; k++){
                usuario[k] = usuario[k+1];
            }
            (*i)--;
            break;
        }
    }
    system("pause");
    system("cls");
}

void buscar(struct Usuarios usuario[], int i){
    int id;
    printf("ID: "); scanf("%i", &id);
    
    for (int k = 0; k < i; k++){
        if (id == usuario[k].id) {
            printf("\nID: %i", usuario[k].id);
            printf("\nNome: %s", usuario[k].nome);
            printf("Email: %s", usuario[k].email);
            printf("Sexo: %s", usuario[k].sexo);
            printf("Endereco: %s", usuario[k].endereco);
            printf("Altura %.2lfm",usuario[k].altura);
            printf("\nVacina: %i\n", usuario[k].vacina);
            break;
        }
    }
    system("pause");
    system("cls");
}

void mostrar(struct Usuarios usuario[], int i){
    printf("Carregando usuarios...\n");

    for (int k = 0; k < i; k++){
        printf("USUARIO %i", k + 1);
        printf("\nID: %i", usuario[k].id);
        printf("\nNome: %s", usuario[k].nome);
        printf("Email: %s", usuario[k].email);
        printf("Sexo: %s", usuario[k].sexo);
        printf("Endereco: %s", usuario[k].endereco);
        printf("Altura %.2lfm",usuario[k].altura);
        printf("\nVacina: %i\n\n", usuario[k].vacina);
    }
    system("pause");
    system("cls");
}
