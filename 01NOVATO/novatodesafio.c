#include <stdio.h>

// Função para imprimir o Tabuleiro

void imprimirTabuleiro(int tabuleiro[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {

    printf("TABULEIRO BATALHA NAVAL - NOVATO! \n");
    printf(" \n");

    // Inicializar o Tabuleiro com '0s' (ZEROS) representando Água

    int tabuleiro[10][10] = {0};

    // Declarar e inicializar os Vetores para representar os Navios

    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // Definir as coordenadas iniciais dos Navios

    int coordenadaNavioHorizontal[] = {2, 5}; // linha e coluna
    int coordenadaNavioVertical[] = {7, 3}; // linha e coluna