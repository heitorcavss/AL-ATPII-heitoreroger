#include <stdio.h>


void intro();
void menu();

void resolverSistemaLinear();
void verificarInjetividade();
void determinarBase();
void calcularAutovaloresAutovetores();
void diagonalizarMatriz();


int main() {
    int opcao;

    intro();

    do {
        menu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: resolverSistemaLinear();           break;
            case 2: verificarInjetividade();           break;
            case 3: determinarBase();                  break;
            case 4: calcularAutovaloresAutovetores();  break;
            case 5: diagonalizarMatriz();              break;
            case 0:
                printf("\nEncerrando o programa. Ate logo!\n");
                break;
            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

/* ─────────────────────────────────────────────
   Introducao grafica
   ───────────────────────────────────────────── */
void intro() {
    printf("╔══════════════════════════════════════════╗\n");
    printf("║      ALGEBRA LINEAR  -  ATP 2            ║\n");
    printf("║  Transformacoes Lineares e Matrizes      ║\n");
    printf("╚══════════════════════════════════════════╝\n");
    printf("\n");
}


void menu() {
    printf("\n┌─────────────────────────────────────┐\n");
    printf("│            MENU PRINCIPAL           │\n");
    printf("├─────────────────────────────────────┤\n");
    printf("│  1. Resolucao de Sistemas Lineares  │\n");
    printf("│  2. Injetividade / Sobrejetividade  │\n");
    printf("│  3. Determinacao de Bases           │\n");
    printf("│  4. Autovalores e Autovetores       │\n");
    printf("│  5. Diagonalizacao de Matrizes      │\n");
    printf("│  0. Sair                            │\n");
    printf("└─────────────────────────────────────┘\n");
}


void resolverSistemaLinear() {
    printf("\n[Resolucao de Sistemas Lineares]\n");
}

void verificarInjetividade() {
    printf("\n[Verificacao de Injetividade, Sobrejetividade e Bijetividade]\n");
}

void determinarBase() {
    printf("\n[Determinacao de Bases]\n");
}

void calcularAutovaloresAutovetores() {
    printf("\n[Calculo de Autovalores e Autovetores]\n");
}

void diagonalizarMatriz() {
    printf("\n[Diagonalizacao de Matrizes]\n");
}
