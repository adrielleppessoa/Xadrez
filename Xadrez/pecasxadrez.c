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

    // CAVALO: 2 casas para baixo e 1 para esquerda - usando loop aninhado (for e while)

    printf("\n===== Movimento do CAVALO =====\n\n");

    for (int i = 0; i < 1; i++) {
        int cavalo = 1;

        // Duas casas para baixo
        while (cavalo <= 2)
        {
            printf("- Baixo\n");
            cavalo++;
        }

        // Uma casa para a esquerda
        printf("- Esquerda\n");
    }

    printf("\n(Fim da Partida)\n\n");



}
