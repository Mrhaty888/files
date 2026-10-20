#include <stdio.h>
#include <locale.h>

typedef struct no{
    int info;
    struct no *prox;
    struct no *ant;
}no;

no* inicializar(){
    return NULL;
}

no* inserir_inicio(no *inicio, int valor) {
    no *novo;
    novo = malloc(sizeof(no));
    novo->info = valor;
    novo->prox = inicio;
    novo->ant = NULL;
    if (inicio != NULL) {
        inicio->ant = novo;
    }
    return novo;
}

no* inserir_fim(no *inicio, int valor) {
    no *fim;
    no *aux1;
    no *aux2;
    aux1 = malloc(sizeof(no));
    aux1->info = valor;
    fim = inicio;
    while (fim != NULL) {
        aux2 = fim;
        fim = fim->prox;
    }
    aux1->prox = fim;
    aux2->prox = aux1;
    return inicio;
}

void exibe_lista(no *inicio){
    no *aux;
    aux = inicio;
    while (aux != NULL) {
        printf("%d <=> ", aux->info);
        aux =aux->prox;
    }
    printf("NULL\n");
}

no* remove_inicio(no *inicio){
    no *aux;
    if (inicio==NULL)
        printf("Lista vazia!\n ");
    else {
       aux = inicio;
       inicio = aux->prox;
       if (inicio != NULL)
            inicio->ant = NULL;
       free(aux);
    }
    return inicio;
}

no* remove_fim (no *inicio){
    no *fim;
    no *aux1;
    no *aux2;
    no *aux3;
    aux2 = inicio;
    fim = inicio;
    while (fim != NULL) {
        aux1 = fim;
        fim = fim->prox;
        if (fim==NULL) {
            aux3 = aux1;
            break;
        } else {
            aux2 = fim;
            aux3 = aux2;
            fim = fim->prox;
        }
    }
    aux1->prox = fim;
    free(aux3);
    return inicio;

}

void main(){
    setlocale(LC_ALL,"portuguese");
    no *inicio;
    inicio = inicializar();
    inicio = inserir_inicio(inicio, 17);
    exibe_lista(inicio);
    inicio = inserir_fim(inicio, 18);
    exibe_lista(inicio);
    inicio = inserir_fim(inicio, 19);
    exibe_lista(inicio);
    inicio = remove_fim(inicio);
    exibe_lista(inicio);

}
