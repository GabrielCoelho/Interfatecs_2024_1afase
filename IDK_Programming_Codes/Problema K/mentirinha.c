#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);

    if( N <= 1 || N >= 1000000){
        printf("nao\n");
        return 0;
    }
    int raiz = sqrt(N);

    if (raiz * raiz == N) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return 0;
}
