#include <stdio.h>
#include "../include/funcao.h"

void inicializarMatriz(Matriz *m){
    
    m->linhas = 0;
    m->colunas = 0;

    for(int i = 0 ; i < MAX_LINHAS; i++){
        for(int j = 0; j < MAX_COLUNAS; j++){
            m->valores[i][j] = 0;
        }
    }
}//função para iniciar qualquer matriz zerada;

void lerMatriz(Matriz *m){
    printf("Digite o tamanho da linha da matriz: ");
    scanf("%d", &m->linhas);

    printf("Digite o tamanho da coluna da matriz: ");
    scanf("%d", &m->colunas);

    for(int i = 0; i < m->linhas; i++){
        for(int j = 0; j < m->colunas; j++){
            printf("Digite o valor do termo I[%d] J[%d]: ",i,j);
            scanf("%lf", &m->valores[i][j]);
            printf("\n");
        }
    }
}//função para ler os valores de uma matriz;

void mostraMatriz(Matriz m){
    for(int i = 0; i < m.linhas; i++){
        for(int j = 0; j < m.colunas; j++){
            printf("%d\t",m.valores[i][j]);
        }
        printf("\n");
    }
}

int multiplicacaoMatriz(Matriz *m, Matriz *n, Matriz *r){
    
    if(m == NULL || n == NULL || r == NULL){
        printf("Erro: ponteiro nulo fornecido para multiplicacaoMatriz.\n");
        return 0;
    }

    
    if(m->colunas == n->linhas){
        r->linhas = m->linhas;
        r->colunas = n->colunas;
        //define o tamanho da matriz resultante
        
        inicializarMatriz(r); //garante que a matriz resultante esteja zerada antes de realizar a multiplicação
        
        for(int i = 0; i < m->linhas; i++){
            for(int j = 0 ;j < n->colunas; j++){
                double soma=0;
                for(int k = 0; k < m->colunas; k++){
                    soma+= m->valores[i][k] * n->valores[k][j];
                }
                r->valores[i][j]= soma;
            }
        }
        return 1;
    } else {
        printf("Erro: não é possível multiplicar essas matrizes.\n");
        return 0;
    }

}





