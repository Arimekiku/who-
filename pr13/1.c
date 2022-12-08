#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10 };
    float *ptr_a;

    printf("%p = %p = %p\n\n", array, &array[0], &array); //1.1

    ptr_a = &array[0]; //1.2 (посилається на адресу памяті масива нульового елементу)
    printf("ptr = %p *ptr_a = %.1f\n", ptr_a, *ptr_a);
    ptr_a++;
    printf("ptr = %p *ptr_a = %.1f\n", ptr_a, *ptr_a);
    ptr_a += 4;
    printf("ptr = %p *ptr_a = %.1f\n", ptr_a, *ptr_a);
    ptr_a -= 2;
    printf("ptr = %p *ptr_a = %.1f\n\n", ptr_a, *ptr_a);

    ptr_a = &array[0];  //1.3
    for (ptr_a; *ptr_a != array[10]; ptr_a += 2) {
        printf("ptr = %p *ptr_a = %.1f\n", ptr_a, *ptr_a);
    }

    printf("\n");
    ptr_a--; //Тому що покажчик зараз дорівню 10, отже вказує на 11 елемент, якого не існує

    for (ptr_a; *ptr_a != array[0]; ptr_a--) {  //1.4
        printf("ptr = %p *ptr_a = %.1f\n", ptr_a, *ptr_a);
    }
}