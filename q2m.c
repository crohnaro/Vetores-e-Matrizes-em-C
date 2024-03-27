#include <stdio.h>

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas e colunas das matrizes (por exemplo, 2 2 para matrizes de 2x2): ");
    scanf("%d %d", &linhas, &colunas);

    int matriz1[linhas][colunas], matriz2[linhas][colunas], soma[linhas][colunas];

    // Receber os valores das duas matrizes
    printf("Digite os valores da primeira matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os valores da segunda matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Somar as matrizes
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Imprimir o resultado da soma
    printf("Resultado da soma das matrizes:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}