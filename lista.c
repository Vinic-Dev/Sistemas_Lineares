#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

Lista *criar_lista() {
    Lista *l;
    l = malloc(sizeof(Lista));
    if (l == NULL) return NULL;
    l->head = NULL;
    l->tail = NULL;
    l->size = 0;
    return l;
} 

void destruir_lista(Lista *l){
    if (l == NULL) return;
    Node *atual = l->head;
    while(atual != NULL){
        Node *proximo = atual->next;
        free(atual);
        atual = proximo;
    }
    free(l);
}

int lista_push(Lista *l, void* t){
    Node *new = malloc(sizeof(Node));
    if(new == NULL) return -1;
    new->data = t;
    new->next = NULL;

    if(l->head == NULL){
        l->head = new;
        l->tail = new;
        l->size++;
    } 
    else {
        Node *previous = l->tail;
        previous->next = new;
        l->tail = new;
        l->size++;
    }
    return 0;
}

void lista_pop(Lista *l, int indice) {

}

void * lista_get(Lista *l, int indice){
    void * data = l->head->data;
    Node *proximo = l->head;
    if(l->head == NULL) {printf("Lista vazia"); return data;}
    for(int i = 0; i < indice; i++){
        proximo = proximo->next;
    }
    return proximo->data;
}
int lista_size(Lista *l);