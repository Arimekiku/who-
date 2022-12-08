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

void array_sum(int arr[100000]) {
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("\nСума: %d", sum);
}

void max_number(int arr[100000]) {
    int i, max = (int)-INFINITY, counter;
    for (i = 0; i < size; i++) {
        if (max < abs(arr[i])) {
            max = arr[i];
            counter = i;
        }
    }

    printf("\n%d-й: %d", counter + 1, max);
}

void sort(int arr[100000]) {
    int i, j;
    for (j = 0; j < size; j++) {
        for (i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i]; //Обмін значеннями
                arr[i] = temp;
            }
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
        printf("\n 4 - Максимальне по модулю");
        printf("\n 5 - Сортування за спаданням");
        printf("\n 6 - Вихід \n");
        printf("Оберіть необхідне: ");
        
        int menubar;
        /* число – вибір рядка меню */
        scanf ("%d", &menubar);

        switch(menubar)
        {
            case 6: printf("\nПрограма завершилась\n"); return 0;
            case 1: manual_input(arr);
            break;
            case 2: random_input(arr);
            break;
            case 3: array_sum(arr);
            break;
            case 4: max_number(arr);
            break;
            case 5: sort(arr);
            break;
            default: printf("Обрано неіснуючий варіант. Повторіть введення\n");
        }

        continue;
    }
}