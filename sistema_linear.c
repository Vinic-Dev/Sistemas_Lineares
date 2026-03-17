#include "sistema_linear.h"

#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

Sistema *criar_sistema(){
    Sistema *sistema = malloc(sizeof(Sistema));
    if (sistema== NULL) {printf("Erro ao alocar sistema"); return NULL;}
    Lista *lista_de_linhas = criar_lista();
    sistema->linhas = lista_de_linhas;
    if (sistema->linhas == NULL) {printf("Erro ao alocar sistema"); return NULL;}
    return sistema;
}

Linha *criar_linha() {
    Linha *linha = malloc(sizeof(Linha));
    if (linha == NULL) {printf("Erro ao alocar linha"); return NULL;}

    Lista *lista_de_termos = criar_lista();
    linha->termos = lista_de_termos;
    if (linha->termos == NULL) {printf("Erro ao alocar linha"); return NULL;}
    return linha;
}

int inserir_termo(Linha *linha, Termo termo) {
    Termo *novo_termo = malloc(sizeof(Termo));
    if (novo_termo == NULL) {
        printf("Erro ao alocar termo\n");
        return 0;
    }
    *novo_termo = termo;
    return lista_push(linha->termos, novo_termo);
}

void imprimir_linha(Linha *linha) {
    int tamanho = linha->termos->size;
    Lista *lista = linha->termos;
    for (int i = 0; i < tamanho; i++) {
        Termo *termo = lista_get(lista, i);
        printf("Termo: %d%c", termo->coeficiente, termo->incognita);
    }
}