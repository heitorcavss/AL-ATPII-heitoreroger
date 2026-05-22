#ifndef MATRIZ_H
#define MATRIZ_H

#define MAX_LINHAS 10
#define MAX_COLUNAS 10

typedef struct {
    int linhas;
    int colunas;
    double valores[MAX_LINHAS][MAX_COLUNAS];
} Matriz; //porque usar struct? mais facil a passagem de parametros nas funções;

void inicializarMatriz(Matriz *m);
void lerMatriz(Matriz *m);
void mostrarMatriz(Matriz m);
int multiplicacaoMatriz(Matriz *m, Matriz *n, Matriz *r);

#endif