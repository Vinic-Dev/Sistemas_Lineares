#ifndef LISTA_H
#define LISTA_H

typedef struct Node {
    void *data;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
    int size;
} Lista;

Lista *criar_lista();
void destruir_lista(Lista *l);
int lista_push(Lista *l, void *t);
void lista_pop(Lista *l, int indice);
void *lista_get(Lista *l, int indice);
int lista_size(Lista *l);
#endif
