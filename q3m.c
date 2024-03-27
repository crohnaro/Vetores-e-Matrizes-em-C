#include <stdio.h>

int main() {
    int linhas1, colunas1, linhas2, colunas2;

    printf("Digite o número de linhas e colunas da primeira matriz (por exemplo, 2 3 para uma matriz de 2x3): ");
    scanf("%d %d", &linhas1, &colunas1);

    printf("Digite o número de linhas e colunas da segunda matriz (por exemplo, 3 2 para uma matriz de 3x2): ");
    scanf("%d %d", &linhas2, &colunas2);

    if (colunas1 != linhas2) {
        printf("As dimensões das matrizes não são compatíveis para multiplicação.\n");
        return 1;
    }

    int matriz1[linhas1][colunas1], matriz2[linhas2][colunas2], produto[linhas1][colunas2];

    // Receber os valores da primeira matriz
    printf("Digite os valores da primeira matriz:\n");
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas1; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Receber os valores da segunda matriz
    printf("Digite os valores da segunda matriz:\n");
    for (int i = 0; i < linhas2; i++) {
        for (int j = 0; j < colunas2; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Multiplicar as matrizes
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            produto[i][j] = 0;
            for (int k = 0; k < colunas1; k++) {
                produto[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Imprimir o resultado da multiplicação
    printf("Resultado da multiplicação das matrizes:\n");
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            printf("%d ", produto[i][j]);
        }
        printf("\n");
    }

    return 0;
}