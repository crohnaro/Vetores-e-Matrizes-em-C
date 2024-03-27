#include <stdio.h>

int main() {
    int vetor[10];
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Digite 10 números para o vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Produto escalar do número pelo vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numero * vetor[i]);
    }

    return 0;
}