#include <stdio.h>

int findPivot(int a, int b, int c) {
    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        return a;
    } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
        if((a < -2000000000 || a > 2000000000 || b < -2000000000 || b > 2000000000 || c < -2000000000 || c > 2000000000)){
        return 1;}

    int pivot = findPivot(a, b, c);
    printf("%d\n", pivot);

    return 0;
}