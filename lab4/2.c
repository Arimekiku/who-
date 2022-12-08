#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
    int N, k, i=1, r, f;
    printf ("Enter your N: ");
    scanf ("%d", &N);
    printf ("Enter your k: ");
    scanf ("%d", &k);

    if (k >= 2 && k <= 16)
    {
        while (N >= 0)
        {
            if (N < k)
            {
                r = r + N * i;
                break;
            } else {
                f = N % k;
                r = r + f * i;
                i = i * 10;
                N = (N - f) / k;
            }
        }

        printf ("%d", r);
    }
}
