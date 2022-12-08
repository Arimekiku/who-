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

int main()
{
    int i, k;
    printf ("Enter k=");
    scanf ("%d", &k);

    for (i = 2; i <= k; i++) {
        if (prime(i) == 0) {
            printf("%d ", i);
        }
    }
}
