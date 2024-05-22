#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int matriz[6][3];
    int superior = 0, esquerda = 0, centro = 0, direita = 0, inferior = 0;

    for (int user = 0; user < N; user++) {
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        for (int j = 0; j <= 2; j++) {
            superior += matriz[0][j];
        }
        for (int i = 1; i <= 4; i++) {
            esquerda += matriz[i][0];
            centro += matriz[i][1];
            direita += matriz[i][2];
        }
        for (int j = 0; j <= 2; j++) {
            inferior += matriz[5][j];
        }
    }

    int max = superior;
    char region[10] = "superior";

    if (esquerda > max) {
        max = esquerda;
        snprintf(region, 10, "esquerda");
    }
    if (centro > max) {
        max = centro;
        snprintf(region, 10, "centro");
    }
    if (direita > max) {
        max = direita;
        snprintf(region, 10, "direita");
    }
    if (inferior > max) {
        max = inferior;
        snprintf(region, 10, "inferior");
    }

    printf("%s\n", region);

    return 0;
}