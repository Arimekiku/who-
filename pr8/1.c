#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int numb; 

    printf("Введіть число: ");
    scanf("%d", &numb); //Читаємо число цілого типу

    if (numb == 1 || numb == 0) 
    {
        printf("\nНе просте і не складене.");
        exit(1); //Терміново завершити програму
    }

    int i;
    for(i = 2; i < numb; i++)
    {
        if (numb % i == 0) {
            printf("\nСкладене.");
            exit(1); //Терміново завершити програму
        }
    }   
    

    printf("\nПросте."); //Вивід повідомлення
}