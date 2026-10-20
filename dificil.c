#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox;
}no;

no* inicializar(){
    return NULL;
}

no* inserir_inicio(no *inicio, int valor){
    no *novo;
    novo = malloc(sizeof(no));
    novo->info = valor;
    novo->prox = inicio;
    return novo;
}

no* inserir_fim(no *inicio, int valor){
   no *novo;
   no *fim;
   novo = malloc(sizeof(no));
   novo->info = valor;
   novo->prox = NULL;
   if (inicio == NULL) {
        return novo;
    }
   fim = inicio;
   while (fim->prox != NULL) {
        fim = fim->prox;
   }
   fim->prox = novo;
   return inicio;
}

no* remover_inicio(no *inicio){
    no *aux;
    if (inicio == NULL) {
        printf("Lista vazia \n");
    } else {
        aux = inicio;
        inicio = aux->prox;
        free(aux);
        printf("Elemento removido do inicio!\n");
    }
    return inicio;
}

no* remover_fim(no *inicio){
    no *aux;
    aux = inicio;
    if (inicio == NULL) {
        printf("Lista vazia\n");
        return inicio;
    }
    if (inicio->prox == NULL) {
        free(aux);
        printf("Ultimo elemento removido. Lista vazia!\n");
        return NULL;
    }
    while (aux->prox->prox != NULL) {
        aux = aux->prox;
    }
    free(aux->prox);
    aux->prox = NULL;
    printf("Elemento removido do fim!\n");
    return inicio;
}
no* destruir(no *inicio){
    no *aux1;
    no *aux2;
    aux1 = inicio;
    aux2 = inicio;
    while (aux2 != NULL) {
        aux2 = aux1->prox;
        free(aux1);
        aux1 = aux2;
    }
    printf("Lista destruida.\n");
    return NULL;
}


void exibir_lista(no *inicio) {
    if (inicio == NULL) {
        printf("Lista vazia.\n");
        return;
    }
    no *aux = inicio;
    printf("Lista: ");
    while (aux != NULL) {
        printf("[%d] -> ", aux->info);
        aux = aux->prox;
    }
    printf("NULL\n");
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    no *lista = inicializar();
    int opcao, valor;

    do {
        system("cls");
        printf("=== MENU LISTA ENCADEADA ===\n");
        exibir_lista(lista);
        printf("----------------------------\n");
        printf("1 - Inserir no Inicio\n");
        printf("2 - Inserir no Fim\n");
        printf("3 - Remover do Inicio\n");
        printf("4 - Remover do Fim\n");
        printf("5 - Destruir Lista\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite o valor para inserir no inicio: ");
                scanf("%d", &valor);
                lista = inserir_inicio(lista, valor);
                break;
            case 2:
                printf("Digite o valor para inserir no fim: ");
                scanf("%d", &valor);
                lista = inserir_fim(lista, valor);
                break;
            case 3:
                lista = remover_inicio(lista);
                break;
            case 4:
                lista = remover_fim(lista);
                break;
            case 5:
                lista = destruir(lista);
                break;
            case 0:
                lista = destruir(lista);
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

        if (opcao != 0) {
            printf("\n");
            system("pause");
        }

    } while(opcao != 0);

    return 0;
}
