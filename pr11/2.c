#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <malloc.h>

void print(int *arr, int rows, int cols) {
    int i, j;
    printf("Ваш масив:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i * cols + j]);
        }

        printf("\n");
    } 
}

void manual_input(int *arr, int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Запишіть %d-й елемент %d-го ряду: ", j + 1, i + 1);
            scanf("%d", &arr[i * cols + j]);
        }
    } 

    print(arr, rows, cols);
}

void random_input(int *arr, int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            arr[i * cols + j] = rand() % 10;
        }
    } 

    print(arr, rows, cols);
}

void function(int *arr, int cols, int k, int p) {
    int i, j;
    printf("Ваш масив:\n");

    for (i = k - 1; i <= p - 1; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i * cols + j]);
        }

        printf("\n");
    } 
}

int main() {
    srand(time(NULL)); //Робимо рандом рандомним
    int rows, cols, k, p;
    printf("\nЗапишіть розмір масива (r c): ");
    scanf("%d %d", &rows, &cols);
    printf("\nЗапишіть чипсла k та p: ");
    scanf("%d %d", &k, &p);
    int arr[rows][cols];

    while (1) {
        printf("\n 1 - Заповнення з клавіатури");
        printf("\n 2 - Рандомне заповнення");
        printf("\n 3 - Написати масив від %d-го до %d-го рядку", k, p);
        printf("\n 4 - Вихід \n");
        printf("Оберіть необхідне: ");
        
        int menubar;
        /* число – вибір рядка меню */
        scanf ("%d", &menubar);

        switch(menubar)
        {
            case 4: printf("\nПрограма завершилась\n"); return 0;
            case 1: manual_input(&arr[0][0], rows, cols);
            break;
            case 2: random_input(&arr[0][0], rows, cols);
            break;
            case 3: function(&arr[0][0], cols, k, p);
            break;
            default: printf("Обрано неіснуючий варіант. Повторіть введення\n");
        }

        continue;
    }
}