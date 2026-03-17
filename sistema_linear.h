#ifndef SISTEMA_LINEAR_H
#define SISTEMA_LINEAR_H
#include "lista.h"

typedef struct {
    int coeficiente;
    char incognita;
} Termo;

typedef struct {
    Lista *termos;
} Linha;

typedef struct {
    Lista *linhas;
} Sistema;

Sistema *criar_sistema();
Linha *criar_linha();
int inserir_termo(Linha *linha, Termo termo);
void imprimir_linha(Linha *linha);


#endif