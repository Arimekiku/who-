#include<stdio.h>
#include<math.h>
#include <stdlib.h>

float F(float x) {
    if (x > 0) {
        return 2.5 - pow(2.7, x);
    } else {
        return 2.5 + pow(2.7, x);
    }
}

float R(float x) {
    int i;
    float sum = 0;

    for (i = 0; i <= 10; i++) {
        sum += pow(1 + x / 2, i);
    }

    return sum + F(x);
}

int main () 
{
    float x, i, a, g;

    printf("Enter inital x: ");
    scanf("%f", &i);
    printf("Enter final x: ");
    scanf("%f", &a);
    printf("Enter the gain: ");
    scanf("%f", &g);

    for(x = i; x <= a; x += g)
    {
        printf("For x = %.3f F = %f R = %f\n", x, F(x), R(x));
    }
}
