#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int size;

void manual_input(int arr[100000]) {
    printf("\nЗапишіть розмір масива: ");
    scanf("%d", &size);

    int i;
    for (i = 0; i < size; i++) {
        printf("Запишіть %d-й елемент: ", i + 1);
        scanf("%d", &arr[i]);
    } 

    printf("Ваш масив: ");

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

void random_input(int arr[100000]) {
    printf("\nЗапишіть розмір масива: ");
    scanf("%d", &size);

    int i;
    for (i = 0; i < size; i++) {
        arr[i] = rand() % 10; //Рандомне число від 0 до 9
    }

    printf("Ваш масив: ");

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

void function(int arr[100000]) {
    int i; 
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = 0;
        } else {
            arr[i] = 1;
        }
    }

    printf("\n");

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    srand(time(NULL)); //Робимо рандом рандомним
    int n = 0, arr[100000];

    while (1) {
        printf("\n\n 1 - Заповнення з клавіатури");
        printf("\n 2 - Рандомне заповнення");
        printf("\n 3 - Сума масиву");
        printf("\n 4 - Вихід \n");
        printf("Оберіть необхідне: ");
        
        int menubar;
        /* число – вибір рядка меню */
        scanf ("%d", &menubar);

        switch(menubar)
        {
            case 4: printf("\nПрограма завершилась\n"); return 0;
            case 1: manual_input(arr);
            break;
            case 2: random_input(arr);
            break;
            case 3: function(arr);
            break;
            default: printf("Обрано неіснуючий варіант. Повторіть введення\n");
        }

        continue;
    }
}