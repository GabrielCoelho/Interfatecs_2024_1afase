#include <stdio.h>
#include <math.h>

int main(void) {
    int n = 0;
    double ang = 0.0;
    scanf("%d %lf", &n, &ang);
    if(n < 1 || n > 100 || ang < 0.0 || ang > 180.0){
        return 0;
    }
    double x[n], y[n];
    for(int i = 0; i < n; i++){
        scanf("%lf %lf", &x[i], &y[i]);

        if(x[i] < -1000.0 || x[i] > 1000.0 || y[i] < -1000.0 || y[i] > 1000.0){
            return 0;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%.2lf %.2lf\n",  cos(((ang * 3.1415) / 180.0))* x[i] -sin(((ang * 3.1415) / 180.0)) * y[i], sin(((ang * 3.1415) / 180.0)) * x[i] + cos(((ang * 3.1415) / 180.0)) * y[i]);
    }
    return 0;
}
