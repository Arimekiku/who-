#include <stdio.h>
#include <math.h>

int main() {
    int numb; 

    printf("Введіть число: ");
    scanf("%d", &numb); //Читаємо число цілого типу

    int iterator = numb, i = 0;
    if (numb >= 10) {
        while(iterator / 10 != 0)
        {
            iterator = iterator / 10;
            i = i + 1;
        }   

    numb = numb - pow(10, i); //Забираємо першу цифру 
    numb = numb * 10; //Додаємо 1 разряд до числа 
    numb = numb + iterator; //Записуємо цифру в цей розряд
    }
    

    printf("\nn = %d", numb); //Вивід повідомлення
}