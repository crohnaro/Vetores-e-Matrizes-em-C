#include <stdio.h>

int main() {
    int matriz[4][4];

    // Receber os valores da matriz
    printf("Digite os valores da matriz de 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimir os valores da matriz
    printf("Valores da matriz de 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}