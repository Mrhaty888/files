#include <stdio.h>
#include <loacle.h>
#include <stdlib.h>

typedef struct no{
    float info;
    struct no *prox;
    struct no *ant;
}no;

no* inicializar(){
    return NULL;
}

no* inserir_inicio(no *inicio, float valor) {
    no *novo;

    novo = malloc(sizeof(no));
    novo->info = valor
    if (inicio == NULL) {
        novo->prox = novo;
        novo->ant = novo;
    } else {

    }
}

