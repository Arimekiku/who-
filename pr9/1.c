#include <stdio.h>
#include <math.h>

int f(int numb) {
    int i, result = 1;
    for (i = 1; i <= numb; i = i + 1)
    {
        if (numb == 0) { //Якщо введене число - 0, то вийти з циклу
            return result;
        }

        result *= i;
    }

    return result;
}

int main() {
    int numb;

    printf("Введіть число: ");
    scanf("%d", &numb);
    printf("\n\n%d! = %d", numb, f(numb));
    
    if (numb > 12) {
        printf("\n\nЗначение невозможно посчитать!");
    }
}