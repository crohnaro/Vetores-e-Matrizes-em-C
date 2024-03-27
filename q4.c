#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[100];

    // Inicializando o gerador de números aleatórios com o tempo atual
    srand(time(NULL));

    printf("Vetor de números aleatórios:\n");
    for (int i = 0; i < 100; i++) {
        vetor[i] = rand() % 1000; // Números aleatórios entre 0 e 999
        printf("%d ", vetor[i]);
    }

    return 0;
}