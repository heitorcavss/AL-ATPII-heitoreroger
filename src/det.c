//organizar ideias de determinantes.
#include <stdio.h>
#include "../include/funcao.h"
#include "../include/det.h"


double calcDet(Matriz* m){
    if(m->linhas != m->colunas){
        return 0; //determinante de matriz não quadrada é zero
    }

    if(m->linhas == 1){
        return m->valores[0][0]; //determinante de matriz 1x1 é o valor do único elemento
    }

    if(m->linhas == 2){
        return m->valores[0][0] * m->valores[1][1] - m->valores[0][1] * m->valores[1][0]; //determinante de matriz 2x2
    }

    double det = 0;

    for(int j = 0; j < m->colunas; j++){
        printf("j=%d, elemento=%.1f, sinal=%.1f\n", j, m->valores[0][j], (j % 2 == 0) ? 1.0 : -1.0);
        Matriz sub;
        inicializarMatriz(&sub);
        //criar submatriz removendo a primeira linha e a coluna j
        int subLinha = 0;
        for(int i = 1; i < m->linhas; i++){
            int subColuna = 0;
            for(int k = 0; k < m->colunas; k++){
                if(k == j) continue; //pular a coluna j
                sub.valores[subLinha][subColuna] = m->valores[i][k];
                subColuna++;
            }
            subLinha++;
        }

        sub.linhas  = m->linhas  - 1; 
        sub.colunas = m->colunas - 1;
        
        double sinal = (j % 2 == 0) ? 1.0 : -1.0; //sinal alterna entre positivo e negativo
        double detSubmatriz = calcDet(&sub); //chamada recursiva para calcular o determinante da submatriz
        det += m->valores[0][j] * sinal * detSubmatriz;
    }
    return det;
}
