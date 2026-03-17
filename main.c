#include <stdio.h>
#include "Lista.h"
#include <windows.h>
#include "sistema_linear.h"

int main(){

    SetConsoleOutputCP(65001);

    Linha *L1 = criar_linha();
    printf("Digite um termo do tipo ax + by");
    Termo t1;
    Termo t2;
    char op;
    scanf("%d%c %c", &t1.coeficiente, &t1.incognita, &op);
    inserir_termo(L1, t1);
    if (op == '+') {
        scanf("%d%c", &t2.coeficiente, &t2.incognita);
    }
    else {
        scanf("%d%c", &t2.coeficiente, &t2.incognita);
        t2.coeficiente *= -1;
    }
    inserir_termo(L1, t2);
   imprimir_linha(L1);

    return 0;
}