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

void desenfilerar(fila *f) {
    no *aux;
    aux = f->inicio;
    if (f->inicio == NULL) {
        printf("Lista vazia! \n");
     }
     else if (f->inicio->prox == NULL){
        f->fim = NULL;
        f->inicio = NULL;
        free(aux);
     } else {
        f->inicio = aux->prox;
        free(aux);
    }
    printf("Removido! \n");
}

void exibir_lista(fila *f) {
    no *aux = f->inicio;
    if (aux == NULL) {
        printf("Lista vazia \n");
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
    if (f->inicio == NULL) {
        printf("Lista vazia \n");
    } else {
        while (aux1!=NULL) {
            aux2 = aux1->prox;
            free(aux1);
            aux1 = aux2;
        }
        printf("Lista destruida! \n");
    }
}

void main() {
    setlocale(LC_ALL, "portuguese");

    fila *f = inicializa();
    int opcao;
    float valor;

    do {

        printf("      Pilha  \n");
        printf("=========================================\n");
        printf(" 1 - Inserir \n");
        printf(" 2 - Remover \n");
        printf(" 3 - Exibir Lista \n");
        printf(" 4 - Destruir lista\n");
        printf(" 0 - Sair\n");
        printf("=========================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nDigite o valor para inserir: ");
                scanf("%f", &valor);
                enfileirar(f, valor);
                exibir_lista(f);
                printf("Valor inserido com sucesso!\n");
                break;

            case 2:
                printf("\nRemovendo\n");
                desenfilerar(f);
                exibir_lista(f);
                break;

            case 3:
                printf("\n--- Elementos da Lista ---\n");
                exibir_lista(f);
                break;

            case 4:
                printf("\nDestruindo toda a lista...\n");
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


