#include <stdio.h>
#include <math.h>

long prime(long number)
{
    if (number == 1 || number == 0) 
    {
        return 0;
    }

    long i;
    for(i = 2; i < number; i++)
    {
        if (number % i == 0) {
            return 0;
        }
    }  

    return 1;
}

int main() {
    int counter = 0;
    long n = 0;

    while (prime(pow(2, pow(2, n)) + 1)) {
        n++;
    }

    printf("Обірвалися на: %d\n\n", n);

    while (n < 10000)
    {
        if (prime(n)) {
            counter++; // counter = counter + 1
        }

        if (n % 1000 == 0 && n != 0) {
            if (n == 1000) {
                printf("000%d-0%d: %d\n", n - 1000, n - 1, counter);
            } else {
                printf("%d-%d: %d\n", n - 1000, n - 1, counter);
            }
            
            counter = 0;
        }

        n++;
    }
}