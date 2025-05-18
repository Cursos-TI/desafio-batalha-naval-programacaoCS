#include <stdio.h>

// Definição do tamanho do Tabuleiro (10x10)

#define TAMANHO_TABULEIRO 10

// Função para imprimir o Tabuleiro

void imprimirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {

    // Impressão da linha de cabeçalho com Letras de A a J

    printf(" A B C D E F G H I J\n");

    // Loop para imprimir cada linha do Tabuleiro

    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {

        printf("%d ", i + 1);

        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {

            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }
}

uujj