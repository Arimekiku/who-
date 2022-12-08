#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float value = 10, sum = 0, eps = pow(10, -3), divider = 1, counter = 1;

    while (value > eps) {
        value = pow(counter, 2) / pow(divider, 3);

        counter += 2;
        divider += 3;
        sum += value;
    }
        
    printf("\n\nsum = %f", sum);
}    