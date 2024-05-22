#include <stdio.h>
int main() {
    int V;
    unsigned long int N;
    scanf("%d%lu", &V, &N);
    if(V >= 30 && V <= 200 && N >= 3 && N <= 1000000) {
        int P[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &P[i]);
            if(P[i] < 30 || P[i] > 200){
                return 0;
            }
        }
        int comb = 0;
        for (int i = 0; i < N - 2; i++) {
            for (int j = i + 1; j < N - 1; j++) {
                for (int k = j + 1; k < N; k++) {
                    if (P[i] + P[j] + P[k] + V == 200) {
                        comb = 1;
                        break;
                    }
                }
            }
        }
        if (comb == 1) {
            printf("fretegratis");
        } else {
            printf("fretepago");
        }
    }
    return 0;
}