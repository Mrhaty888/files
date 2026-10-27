#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct no{
    float info;
    struct no *prox;
}no;

no* inicializacao(){
    return NULL;
}

no* inserir(no *inicio, float valor) {
    no *novo = malloc(sizeof(no));
    if (novo == NULL)
        return inicio;

    novo->info = valor;
    novo->prox = inicio;
    printf("Inserido!\n");
    return novo;
}

no* remover(no *inicio) {
    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return NULL;
    }
    no *aux = inicio;
    inicio = inicio->prox;
    free(aux);
    printf("Removido!\n");
    return inicio;
}

void exibir_lista(no *inicio) {
    no *aux;
    if (inicio == NULL) {
        printf("Lista vazia \n");
    } else {
        while (aux!=NULL) {
            printf("%.2f -> ",aux);
            aux=aux->prox;
        }
        printf("NULL");
    }
}

no* liberar_memoria(no *inicio) {
    no *aux1, *aux2;
    if (inicio == NULL) {
        printf("Lista vazia \n");
        return NULL;
    }
    aux1 = inicio;
    while (aux1!=NULL) {
        aux2 = aux1->prox;
        free(aux1);
        aux1 = aux2;
    }
    printf("Lista destruida! \n");
}

void main() {
    setlocale(LC_ALL, "portuguese");

    no *inicio = inicializacao();
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
                inicio = inserir(inicio, valor);
                exibir_lista(inicio);
                printf("Valor inserido com sucesso!\n");
                break;

            case 2:
                printf("\nRemovendo\n");
                inicio = remover(inicio);
                exibir_lista(inicio);
                break;

            case 3:
                printf("\n--- Elementos da Lista ---\n");
                exibir_lista(inicio);
                break;

            case 4:
                printf("\nDestruindo toda a lista...\n");
                inicio = liberar_memoria(inicio);
                break;

            case 0:
                printf("\nSaindo do programa...\n");
                inicio = liberar_memoria(inicio);
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

        printf("\n");
        system("pause");
        system("cls");

    } while(opcao != 0);
}
