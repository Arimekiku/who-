#include <stdio.h>
#include <math.h>

int main() {
    int n, val = 1;
    for (n = 0; n <= 6; n = n + 1) //for цикл
    {
        printf("n = %d || val = %d\n", n, val); //вивід
 
        val = pow(2, n); // val = 2 ^ n
    }
}