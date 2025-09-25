#include <stdio.h>

// Torre: move para a direita usando recursão
void moverdireita(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverdireita(casas - 1);
    }
}

// Rainha: move para baixo usando recursão
void moverbaixo(int casas) {
    if (casas > 0) {
        printf("Baixo\n");
        moverbaixo(casas - 1);
    }
}

// Bispo: move na diagonal (Cima, Direita) usando recursão + loop
void moverdiagonal(int linha, int coluna) {
    if (linha > 0) {
        for (int j = 0; j < coluna; j++) {
            printf("Cima, Direita\n");
        }
        moverdiagonal(linha - 1, coluna);
    }
}

int main() {
    int rainha = 8;
    int bispo = 5; 
    int torre = 5;

    // Torre
    printf("\n[Torre]\n");
    moverdireita(torre);

    // Rainha
    printf("\n[Rainha]\n");
    moverbaixo(rainha);

    // Bispo
    printf("\n[Bispo]\n");
    moverdiagonal(bispo, 1);

    // Cavalo: movimento em "L" (2 cima, 1 direita)
    printf("\n[Cavalo]\n");
    for (int cima = 1, direita = 0; cima <= 2 || direita < 1; cima++) {
        if (cima <= 2) {
            printf("Cima\n");
            if (cima < 2) continue;
        }
        if (direita < 1) {
            printf("Direita\n");
            direita++;
            break;
        }
    }

    return 0;
}