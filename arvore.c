#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *esq;
    struct no *dir;
}no;

no* inicializa(){
    return NULL;
}

no* insere(no *raiz, int valor) {
    if (raiz==NULL) {
        raiz=malloc(sizeof(no));
        raiz->info = valor;
        raiz->esq = NULL;
        raiz->dir = NULL;
    }
    else if (valor == raiz->info)
        printf("O valor já está na arvore. \n");
    else{
        if (valor < raiz->info)
            raiz->esq = insere(raiz->esq, valor);
        }
        else raiz->dir = insere(raiz->dir, valor);
    return raiz;
}

no* remove(no *raiz, int valor) {
    no *retirado;
    esquerda = raiz->esq;
    direita = raiz->dir;
    if (raiz==NULL)
        printf("Arvore vazia");
    else{
        if (valor == esquerda->info) {
            if (esquerda->esq == NULL && esquerda->dir == NULL){
                free(esquerda);
            } else {
                if (esquerda->esq != NULL) {
                    raiz->esq = esquerda->esq;
                    free(esquerda);
                }
                else if (esquerda->dir != NULL) {
                    raiz->esq = esquerda->dir;
                    free(esquerda);
                }
                else if (direita->esq != NULL) {
                    raiz->dir = direita->esq;
                    free(direita);
                }
                else if (direita->dir != NULL) {
                    raiz->dir = direita->esq;
                    free(direita);
                }
            }
        }
        else if (valor<)
    }
    return raiz;
}
