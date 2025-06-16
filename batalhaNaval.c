#include <stdio.h>

// Define o tamanho do tabuleiro e dos navios
#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    // Declara a matriz 10x10 para o tabuleiro
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int i, j;

    // Inicializa o tabuleiro com 0 (água)
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas do navio HORIZONTAL (tamanho 3)
    int navio_h_linha = 2;
    int navio_h_coluna = 3;

    // Coordenadas do navio VERTICAL (tamanho 3)
    int navio_v_linha = 5;
    int navio_v_coluna = 7;

    // Posiciona o navio HORIZONTAL no tabuleiro com o valor 3
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[navio_h_linha][navio_h_coluna + i] = 3;
    }

    // Posiciona o navio VERTICAL no tabuleiro com o valor 3
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[navio_v_linha + i][navio_v_coluna] = 3;
    }

    // Exibe o tabuleiro no console
    printf("### TABULEIRO DE BATALHA NAVAL ###\n\n");
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
