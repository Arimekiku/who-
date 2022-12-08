#include <stdio.h>
#include <math.h>

int main() {
    int numb;

    printf("Введіть число: ");
    scanf("%d", &numb); //Читаємо число цілого типу

    int i, result = 1;
    for (i = 1; i <= numb; i = i + 1)
    {
        if (numb == 0) { //Якщо введене число - 0, то вийти з циклу
            break;
        }

        result *= i;
    }

    printf("\n%d! = %d", numb, result); //Вивід
}