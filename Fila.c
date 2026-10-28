#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct no{
    float info;
    struct no *prox;
}no;

typedef struct{
    no *inicio;
    no *fim;
} fila;

fila* inicializa(){
    fila *f;

    f = malloc(sizeof(fila));
    f->inicio = NULL;
    f->fim = NULL;
    return f;

}

void enfileirar(fila *f, float valor){
    no *novo;
    novo = malloc(sizeof(no));
    novo->info = valor;
    novo->prox = NULL;
    if (f->inicio == NULL)
        f->inicio = novo;
    else f->fim->prox = novo;
    f->fim = novo;
}

float desenfilerar(fila *f) {
    no *aux;
    float valor;
    aux = f->inicio;
    if (f->inicio == NULL) {
        printf("Fila vazia! \n");
     }
     else{
        if (f->inicio->prox == NULL){
        valor = aux->info;
        f->fim = NULL;
        f->inicio = NULL;
        free(aux);
     } else {
        f->inicio = aux->prox;
        free(aux);
    }
    return valor;
    }
}

void exibir_Fila(fila *f) {
    no *aux = f->inicio;
    printf("Exibir fila: ");
    if (aux == NULL) {
        printf("Fila vazia \n");
    } else {
        while (aux!=NULL) {
            printf("%.2f <- ",aux->info);
            aux=aux->prox;
        }
        printf("NULL \n");
    }
}

void liberar_memoria(fila *f) {
    no *aux1, *aux2;
    aux1 = f->inicio;
    aux2 = aux1;
    if (f->inicio == NULL) {
        printf("Fila vazia \n");
    } else {
        while (aux1!=NULL) {
            aux2 = aux1->prox;
            free(aux1);
            aux1 = aux2;
        }
        f->fim = NULL;
        f->inicio = NULL;
        printf("Fila destruida! \n");
        free(f);
    }
}

void main() {
    setlocale(LC_ALL, "portuguese");

    fila *f = inicializa();
    int opcao;
    float valor;

    do {

        printf("      Fila  \n");
        printf("=========================================\n");
        printf(" 1 - Inserir \n");
        printf(" 2 - Remover \n");
        printf(" 3 - Exibir Fila \n");
        printf(" 4 - Destruir Fila\n");
        printf(" 0 - Sair\n");
        printf("=========================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nDigite o valor para push: ");
                scanf("%f", &valor);
                enfileirar(f, valor);
                exibir_Fila(f);
                printf("Valor inserido com sucesso!\n");
                break;

            case 2:
                printf("\nRemovendo\n");
                valor = desenfilerar(f);
                if (desenfilerar(f))
                    printf("Valor %.2f removido! \n",valor);
                exibir_Fila(f);
                break;

            case 3:
                printf("\n--- Elementos da fila ---\n");
                exibir_Fila(f);
                break;

            case 4:
                printf("\nDestruindo toda a fila...\n");
                liberar_memoria(f);
                break;

            case 0:
                printf("\nSaindo do programa...\n");
                liberar_memoria(f);
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

        printf("\n");
        system("pause");
        system("cls");

    } while(opcao != 0);
}


