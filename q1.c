#include <stdio.h>

int main() {
    int numeros[4];
    int soma = 0;

    printf("Digite 4 números:\n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    float media = (float)soma / 4;
    printf("A média dos números é: %.2f\n", media);

    return 0;
}