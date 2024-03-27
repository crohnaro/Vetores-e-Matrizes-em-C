#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], vetorSoma[5];

    printf("Digite 5 números para o primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 5 números para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

    printf("Vetor soma:\n");
    for (int i = 0; i < 5; i++) {
        vetorSoma[i] = vetor1[i] + vetor2[i];
        printf("%d ", vetorSoma[i]);
    }

    return 0;
}