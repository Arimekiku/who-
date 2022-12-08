#include <stdio.h>
#include <math.h>

int main() {
    int n = 0, val = 1;
    while (n <= 6) //while цикл
    {
        printf("n = %d || val = %d\n", n, val); //вивід

        n = n + 1;
        val = pow(2, n); // val = 2 ^ n
    }
}