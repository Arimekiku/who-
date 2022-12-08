#include <stdio.h>
#include <math.h>

int check(long number)
{
    if (number >= 10 || number == 0) {
        int copy = number;
        while(number / 10 != 0)
        {
            int checker = number % 10;

            if (checker == 0 || copy % checker != 0) { //Якщо в цислі є цифра 0, або цисло не ділиться націло на одну з цифр - вийти з циклу
                return 0;
            }

            number = number / 10;
        }   

        int checker = number % 10;
        if (checker == 0 || copy % checker != 0) { //Якщо в цислі є цифра 0, або цисло не ділиться націло на одну з цифр - вийти з циклу
            return 0;
        }
    } else {
        return 1;
    }

    return 1;
}

int ticket(int n) {
    int first = n % 10 + (n / 10) % 10 + (n / 100) % 10;
    int second = (n / 1000) % 10 + (n / 10000) % 10 + (n / 100000) % 10;

    if (first == second) {
        return 1;
    }

    return 0;
}

int main() {
    int n, i;

    printf("Введіть число: ");
    scanf("%d", &n); //Читаємо число цілого типу

    for (i = 0; i < n; i++) {
        if (check(i)) {
            printf("%d ", i);
        }
    }

    printf("\n\n");
    
    int N, M;
    printf("N = ");
    scanf("%d", &N);
    printf("M = ");
    scanf("%d", &M);

    for (N; N < M; N++) {
        if (ticket(N)) {
            printf("%d%d%d %d%d%d\n", (N / 100000) % 10, (N / 10000) % 10, (N / 1000) % 10, (N / 100) % 10, (N / 10) % 10, N % 10);
        }
    }
}