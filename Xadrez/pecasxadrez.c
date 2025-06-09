#include <stdio.h>

int main() {

    // TORRE: 5 casas para direita - usando "while"

    printf("===== Movimento da TORRE =====\n\n");

    int torre = 1;
    while (torre <= 5) {

        printf("- Direita\n");
        torre++;
    }

    // BISPO: 5 casas na diagonal (para cima à direita) - usando "do-while"

    printf("\n===== Movimento do BISPO =====\n\n");

    int bispo = 1;
    do {
        printf("- Cima Direita\n");
        bispo++;
    }
    while (bispo <= 5);

    // RAINHA: 8 casas para esquerda - usando "for"

    printf("\n===== Movimento da RAINHA =====\n\n");

    for (int rainha = 1; rainha <= 8; rainha++) {
        printf("- Esquerda\n");
    }

    printf("\n(Fim da Partida)\n\n");



}
