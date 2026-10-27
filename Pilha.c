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

no* inserir(no *topo, float valor) {
    no *novo = malloc(sizeof(no));
    if (novo == NULL)
        return topo;

    novo->info = valor;
    novo->prox = topo;
    printf("Inserido!\n");
    return novo;
}

no* remover(no *topo) {
    if (topo == NULL) {
        printf("Lista vazia!\n");
        return NULL;
    }
    no *aux = topo;
    topo = topo->prox;
    free(aux);
    printf("Removido!\n");
    return topo;
}

void exibir_lista(no *topo) {
    no *aux = topo;
    if (topo == NULL) {
        printf("Lista vazia \n");
    } else {
        while (aux!=NULL) {
            printf("%.2f <- ",aux->info);
            aux=aux->prox;
        }
        printf("NULL \n");
    }
}

no* liberar_memoria(no *topo) {
    no *aux1, *aux2;
    if (topo == NULL) {
        printf("Lista vazia \n");
        return NULL;
    }
    aux1 = topo;
    while (aux1!=NULL) {
        aux2 = aux1->prox;
        free(aux1);
        aux1 = aux2;
    }
    printf("Lista destruida! \n");
    return NULL;
}

void main() {
    setlocale(LC_ALL, "portuguese");

    no *topo = inicializacao();
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
                topo = inserir(topo, valor);
                exibir_lista(topo);
                printf("Valor inserido com sucesso!\n");
                break;

            case 2:
                printf("\nRemovendo\n");
                topo = remover(topo);
                exibir_lista(topo);
                break;

            case 3:
                printf("\n--- Elementos da Lista ---\n");
                exibir_lista(topo);
                break;

            case 4:
                printf("\nDestruindo toda a lista...\n");
                topo = liberar_memoria(topo);
                break;

            case 0:
                printf("\nSaindo do programa...\n");
                topo = liberar_memoria(topo);
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

        printf("\n");
        system("pause");
        system("cls");

    } while(opcao != 0);
}
