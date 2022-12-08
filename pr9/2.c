#include <stdio.h>
#include <math.h>

int fibonacci(int number)
{
    if (number == 0)
        return 0; //Базовий випадок
    if (number == 1)
        return 1; //Базовий випадок 
    return fibonacci(number - 1) + fibonacci(number - 2); //Класична рекурсія
}

int main() {
    int numb;

    printf("Введіть число: ");
    scanf("%d", &numb); //Читаємо число цілого типу

    printf("\n%d = %d", numb, fibonacci(numb)); //Вивід
}