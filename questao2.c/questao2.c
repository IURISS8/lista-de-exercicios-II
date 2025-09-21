#include <stdio.h>

int main() {
    int N, i, soma = 0;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        soma += i * i;
    }

    printf("A soma dos quadrados dos primeiros %d numeros eh: %d\n", N, soma);

    return 0;
}
