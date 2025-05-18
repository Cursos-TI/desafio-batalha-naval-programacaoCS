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

// Função para criar a habilidade de Cone no Tabuleiro

void criarHabilidadeCone(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y) {

    // Loop para criar a forma de Cone

    for (int i = 0; i < 3; i++) {

        // Loop para criar a base do Cone

        for (int j = -i; j <= i; j++) {

            // Verificação da Posição 

            if (x + i >= 0 && x + i < TAMANHO_TABULEIRO && y + j >= 0 && y + j < TAMANHO_TABULEIRO && tabuleiro[x + i][y + j] != 3) {
                
                // Marcação da Posição 
                
                tabuleiro[x + i][y + j] = 5;
            }
        }
    }
}