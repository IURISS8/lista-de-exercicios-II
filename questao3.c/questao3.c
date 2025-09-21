#include <stdio.h>

int main() {
    int valor, soma = 0;

    printf("Jogo do dado! Digite os valores (1 a 6).\n");

    while (soma < 20) {
        printf("Digite o valor do dado: ");
        scanf("%d", &valor);

        if (valor < 1 || valor > 6) {
            printf("Valor invalido! O dado so pode ter valores entre 1 e 6.\n");
            continue;
        }

        soma += valor;
        printf("Soma atual: %d\n", soma);
    }

    printf("Fim do jogo! A soma dos valores foi %d (>= 20).\n", soma);

    return 0;
}
