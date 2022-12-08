#include <stdio.h>
#include <math.h>

float f(float x) {
    return 1. / (3 * pow(x, 2) - 2 * x + 4);
}

float calculate(float *Y, int N, float a, float b) {
    float multiplier = 3 * (b - a) / (8 * N), sum = Y[0];
    int i;
    for (i = 1; i < N; i++) {
        if (i % 3 == 0) {
            sum += 2 * Y[i];
        } else {
            sum += 3 * Y[i];
        }
    }

    return multiplier * sum;
}

int main() {
    int N, i;
    float a = -1, b = 3;

    printf("N = ");
    scanf("%d", &N);

    float X[N], Y[N], delX = (float)(b - a) / N;
    X[0] = a;
    Y[0] = f(X[0]);

    for (i = 1; i < N; i++) {
        X[i] = X[i - 1] + delX;
        Y[i] = f(X[i]);
    }

    printf("Integral: %f", calculate(Y, N, a, b));
}
