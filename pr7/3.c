#include <stdio.h>
#include <math.h>

int main() {
    int elem, prev_elem = (int) -INFINITY; // -INFINITY = -2147483647

    int i;
    while(1)
    {
        if (prev_elem >= elem) { //Якщо введене число менше або дорівню минулому, то вийти з циклу
            break;
        } 

        prev_elem = elem;

        printf("Введіть число: ");
        scanf("%d", &elem); //Читаємо число цілого типу
    }

    printf("\nПослідовність перестала зростати!"); //Вивід повідомлення про послідовність
}