#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct no {
    int info;
    struct no *prox;
    struct no *ant;
} no;

no* inicializar() {
    return NULL;
}

no* insere_inicio(no *inicio, int valor) {
    no *novo = malloc(sizeof(no));
    if (novo == NULL) return inicio;

    novo->info = valor;
    novo->ant = NULL;
    novo->prox = inicio;

    if (inicio != NULL) {
        inicio->ant = novo;
    }
    return novo;
}

no* insere_fim(no *inicio, int valor) {
    if (inicio == NULL) {
        return insere_inicio(inicio, valor);
    }

    no *novo = malloc(sizeof(no));
    if (novo == NULL) return inicio;

    novo->info = valor;
    novo->prox = NULL;

    no *fim = inicio;
    while (fim->prox != NULL) {
        fim = fim->prox;
    }

    fim->prox = novo;
    novo->ant = fim;

    return inicio;
}

no* remove_inicio(no *inicio) {
    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return NULL;
    }
    no *aux = inicio;
    inicio = inicio->prox;
    if (inicio != NULL) {
        inicio->ant = NULL;
    }
    free(aux);
    printf("Removido do inicio com sucesso!\n");
    return inicio;
}

no* remove_fim(no *inicio) {
    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return NULL;
    }
    if (inicio->prox == NULL) {
        free(inicio);
        printf("Ultimo elemento removido!\n");
        return NULL;
    }

    no *aux = inicio;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }

    aux->ant->prox = NULL;
    free(aux);
    printf("Removido do fim com sucesso!\n");
    return inicio;
}

no* exibir_lista(no *inicio) {
    if (inicio == NULL) {
        printf("Lista vazia! (NULL)\n");
        return inicio;
    }

    no *aux = inicio;
    printf("NULL <- ");
    while (aux != NULL) {
        printf("%d", aux->info);
        if (aux->prox != NULL) {
            printf(" <=> ");
        }
        aux = aux->prox;
    }
    printf(" -> NULL\n");
    return inicio;
}

no* exibir_inverso(no *inicio) {
    if (inicio == NULL) {
        printf("Lista vazia! (NULL)\n");
        return inicio;
    }

    no *aux = inicio;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }

    printf("NULL <- ");
    while (aux != NULL) {
        printf("%d", aux->info);
        if (aux->ant != NULL) {
            printf(" <=> ");
        }
        aux = aux->ant;
    }
    printf(" -> NULL\n");
    return inicio;
}

no* buscar_valor(no *inicio, int valor) {
    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return NULL;
    }

    no *aux = inicio;
    while (aux != NULL) {
        if (aux->info == valor) {
            printf("Valor encontrado!\n");
            return inicio;
        }
        aux = aux->prox;
    }
    printf("Valor nao encontrado.\n");
    return inicio;
}

no* destuir_lista(no *inicio) {
    no *aux = inicio;
    no *aux2;
    while (aux != NULL) {
        aux2 = aux->prox;
        free(aux);
        aux = aux2;
    }
    printf("Lista destruida!\n");
    return NULL;
}

void main() {
    setlocale(LC_ALL, "portuguese");

    no *inicio = inicializar();
    int opcao;
    int valor;

    do {
        system("cls");

        printf("=========================================\n");
        printf("      MENU - LISTA DUPLAMENTE ENCADEADA  \n");
        printf("=========================================\n");
        printf(" 1 - Inserir no Inicio\n");
        printf(" 2 - Inserir no Fim\n");
        printf(" 3 - Remover do Inicio\n");
        printf(" 4 - Remover do Fim\n");
        printf(" 5 - Exibir Lista\n");
        printf(" 6 - Exibir Lista Invertida\n");
        printf(" 7 - Buscar Valor\n");
        printf(" 8 - Destruir Lista\n");
        printf(" 0 - Sair\n");
        printf("=========================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nDigite o valor para inserir no inicio: ");
                scanf("%d", &valor);
                inicio = insere_inicio(inicio, valor);
                printf("Valor inserido com sucesso!\n");
                break;

            case 2:
                printf("\nDigite o valor para inserir no fim: ");
                scanf("%d", &valor);
                inicio = insere_fim(inicio, valor);
                printf("Valor inserido com sucesso!\n");
                break;

            case 3:
                printf("\nRemovendo do inicio...\n");
                inicio = remove_inicio(inicio);
                break;

            case 4:
                printf("\nRemovendo do fim...\n");
                inicio = remove_fim(inicio);
                break;

            case 5:
                printf("\n--- Elementos da Lista ---\n");
                exibir_lista(inicio);
                break;

            case 6:
                printf("\n--- Elementos da Lista (Invertida) ---\n");
                exibir_inverso(inicio);
                break;

            case 7:
                printf("\nDigite o valor que deseja buscar: ");
                scanf("%d", &valor);
                buscar_valor(inicio, valor);
                break;

            case 8:
                printf("\nDestruindo toda a lista...\n");
                inicio = destuir_lista(inicio);
                break;

            case 0:
                printf("\nSaindo do programa...\n");
                inicio = destuir_lista(inicio);
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

        printf("\n");
        system("pause");

    } while(opcao != 0);
}
