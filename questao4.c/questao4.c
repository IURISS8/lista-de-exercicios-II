#include <stdio.h>

int main() {
    int segredo = 37;
    int palpite;

    printf("Jogo da Adivinhacao! Tente adivinhar o numero entre 1 e 50.\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite < segredo) {
            printf("O numero secreto eh MAIOR!\n");
        } else if (palpite > segredo) {
            printf("O numero secreto eh MENOR!\n");
        }
    } while (palpite != segredo);

    printf("Parabens! Voce acertou, o numero secreto eh %d.\n", segredo);

    return 0;
}
