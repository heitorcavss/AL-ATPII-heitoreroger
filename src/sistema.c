#include <stdio.h>
#include "../include/funcao.h"
#include "../include/det.h"
#include "../include/sistemas.h"

#define SOLUCAO_UNICA 1
#define INFINITAS_SOLUCOES 2
#define SEM_SOLUCAO 0

void lerSistema(Matriz *aug, int *numIncognitas){
    //Leitura da matriz aumentada do sistema linear
    int numEquacoes;
    printf("Digite o numero de equacoes: ");
    scanf("%d", &numEquacoes);
    printf("Digite o numero de incognitas: ");
    scanf("%d", numIncognitas);

    aug->linhas = numEquacoes;
    aug->colunas = (*numIncognitas) + 1; //expansão
    for(int i = 0; i < aug->linhas; i++){
        for(int j = 0; j < aug->colunas; j++){
            if(j < (*numIncognitas)){
                printf("Digite o coeficiente da incognita x%d na equacao %d: ", j + 1, i + 1);
            } else {
                printf("Digite o termo independente da equacao %d: ", i + 1);
            }
            scanf("%lf", &aug->valores[i][j]);
        }
    }
}


int resolverSistemaGauss(Matriz *aug, double solucao[]){
    int m = aug->linhas;
    int n = aug->colunas - 1; //número de incógnitas

    //Copiar a matriz sem a expansão p calcular o determinante
    Matriz copia;
    inicializarMatriz(&copia);
    copia.linhas = m;
    copia.colunas = n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            copia.valores[i][j] = aug->valores[i][j];
        }
    }
    double det = calcularDeterminante(&copia);

    if(det != 0){
        printf("O sistema tem solução única (ainda tenho que implementar).\n"); //sistema tem solução única
    }else{
        printf("O sistema tem infinitas soluções ou é impossível (ainda tenho que implementar).\n"); //sistema tem infinitas soluções ou é impossível
    }
}

void exibirSolucao(double solucao[], int n, int resultado);


