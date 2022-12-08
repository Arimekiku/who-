#include <stdio.h>
#include <math.h>

int fact(int k) {
    int i, fact = 1; 
    for (i = 1; i <= k; i++) {
        fact *= i;
    }
    
    return fact;
}
 
float funcF(float v, float x, float eps) {
    int k = 0; 
    float sum = 0, add = 1000;

    while (1) {
        if (add < eps) break;

        add = pow(-1, k) * (pow(x, v + k)/(fact(k) * (v + k)));
        sum += add;
        k++;
    } 

    return sum;
}
 
float funcS(float v, float x, float eps) {
    return funcF(v + 1, x, eps) - v * funcF(v, x, eps) + pow(x, v) * pow(2.7, -x);
}
 
int main() {
    float x1, x2, delX, eps = pow(10, -4);

    printf("Enter initial x: ");
    scanf("%f", &x1);
    printf("Enter final x: ");
    scanf("%f", &x2);
    printf("Enter the gain of x: ");
    scanf("%f", &delX);

    printf("X\tF\tS\tDelta\tv\n");

    for (x1; x1 < x2 + delX; x1 += delX) {
        printf("%.1f\t%.2f\t%.2f\t%.2f\t%.2f\n", x1, funcF(1, x1, eps), funcS(1, x1, eps), funcS(1, x1, eps) - funcF(1, x1, eps), 1.);
        printf("%.1f\t%.2f\t%.2f\t%.2f\t%.2f\n", x1, funcF(1.7, x1, eps), funcS(1.7, x1, eps), funcS(1.7, x1, eps) - funcF(1.7, x1, eps), 1.7);
        printf("%.1f\t%.2f\t%.2f\t%.2f\t%.2f\n", x1, funcF(2.5, x1, eps), funcS(2.5, x1, eps), funcS(2.5, x1, eps) - funcF(2.5, x1, eps), 2.5);
    }  
}
