#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float F(float x) {
    if (x > 1) {
        return sqrt(1 + x/2);
    } else {
        return 1. / (1 + x/2);
    }
}

float Y(float x) {
    return (1 + pow(2.7, x)) / (1 - pow(2.7, x)) + F(x);
}

int main() {

    float x = 0, dx = 0.25;

    printf("X\tY(x)");

    for (x; x <= 2; x += dx) {
        printf("\n%.3f\t%f", x, Y(x));
    }
}    