#include <stdio.h>

// TORRE: função recursiva
void moveTorre(int casas) {
    if (casas == 0) return;
    printf("- Direita\n");
    moveTorre(casas - 1);
}

// BISPO: versão AVANÇADA (recursividade + loops aninhados)
void moveBispo(int casas) {
    if (casas == 0) return;

    // Loops aninhados para simular diagonal: vertical + horizontal
    for (int cima = 0; cima < 1; cima++) {            // Vertical
        for (int direita = 0; direita < 1; direita++) {        // Horizontal
            printf("- Cima Direita\n");
        }
    }

    moveBispo(casas - 1);  // Chamada recursiva
}

// RAINHA: função recursiva
void moveRainha(int casas) {
    if (casas == 0) return;
    printf("- Esquerda\n");
    moveRainha(casas - 1);
}

// CAVALO: loops complexos (fora do main!)
void moveCavalo() {
    for (int cima = 1; cima <= 2; cima++) {
        if (cima == 2) {
            printf("- Cima\n");
        } else {
            printf("- Cima\n");
            continue;
        }
    }

    for (int direita = 1; direita <= 1; direita++) {
        printf("- Direita\n");
        break;
    }
}

int main() {
    printf("===== Movimento da TORRE =====\n\n");
    moveTorre(5);

    printf("\n===== Movimento do BISPO =====\n\n");
    moveBispo(5);

    printf("\n===== Movimento da RAINHA =====\n\n");
    moveRainha(8);

    printf("\n===== Movimento do CAVALO  =====\n\n");
    moveCavalo();

    printf("\n(FIM DE JOGO!!\n\n)");

    return 0;

}
