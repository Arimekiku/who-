#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float func(int a, float b) {
    return ((float)a / 2) * pow(cos(pow(b, 4)), 2);
}

int main() {
    int a;

    printf("Введіть а: ");
    scanf("%d", &a);
    int *ptr_a = &a;

    printf("Ваше а: %d, ptr_a: %p", *ptr_a, ptr_a);

    float b;

    printf("\n\nВведіть b: ");
    scanf("%f", &b);
    float *ptr_b = &b;

    printf("Ваше b: %.3f, ptr_b: %p", *ptr_b, ptr_b);

    float y = func(*ptr_a, *ptr_b);
    printf("\n\nВаше y: %.3f, адреса y: %p", y, &y);
}