#include <stdio.h>

// Desafio Batalha Naval - MateCheck
#include <stdio.h>

#define TAM 10
#define NAVIO 3

int main() {
    int tabuleiro[TAM][TAM];

    // 1. Inicializar o tabuleiro com 0
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Declarar vetores dos navios (arrays unidimensionais)
    int navio1[NAVIO]; // horizontal
    int navio2[NAVIO]; // vertical

    // Coordenadas iniciais escolhidas diretamente no código, conforme pedido
    int linhaHorizontal = 2;
    int colunaHorizontal = 4;

    int linhaVertical = 5;
    int colunaVertical = 1;

    // Preencher os vetores apenas com o valor 3 (parte do navio)
    for (int i = 0; i < NAVIO; i++) {
        navio1[i] = 3;
        navio2[i] = 3;
    }

    // Posicionar navio horizontal
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = navio1[i];
    }

    // Posicionar navio vertical
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = navio2[i];
    }

    // 3. Exibir tabuleiro
    printf("\n=== TABULEIRO DE BATALHA NAVAL ===\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}