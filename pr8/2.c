#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double y(double x) {
    return log((1 + x) / (1 - x));
}

double S(double x) {
    double eps = pow(10, -4);

    double elem = x, sum = 0, i = 1;
    while (fabs(elem) > eps) 
    {
        sum = sum + elem;
        i = i + 2;
        elem = pow(x, i) / i;
    }

    return 2 * sum;
}

int main() {
    double numb; 

    printf("Введіть число: ");
    scanf("%lf", &numb); //Читаємо число типу з плаваючою точкою

    printf("\nS = %lf\ny = %lf", S(numb), y(numb)); //Вивід повідомлення типу з плаваючою точкою
}