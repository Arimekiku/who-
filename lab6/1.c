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

void function(int *arr, int rows, int cols) {
    int i, j, sum[rows];

    for (i = 0; i < rows; i++) {
        sum[i] = 0;

        for (j = 0; j < cols; j++) {
            sum[i] += arr[i * cols + j];
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 1; j < rows; j++) {
            if (sum[j] > sum[j - 1]) {
                int k;
                for (k = 0; k < cols; k++) {
                    int temp = arr[j * cols + k];
                    arr[j * cols + k] = arr[(j - 1) * cols + k];
                    arr[(j - 1) * cols + k] = temp;
                }

                int temp = sum[j];
                sum[j] = sum[j - 1];
                sum[j - 1] = temp;
            } 
        }
    }

    print(arr, rows, cols);
}

int main() {
    srand(time(NULL)); //Робимо рандом рандомним
    int rows, cols;
    printf("\nЗапишіть розмір масива (r c): ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];

    while (1) {
        printf("\n 1 - Заповнення з клавіатури");
        printf("\n 2 - Рандомне заповнення");
        printf("\n 3 - Сортувати рядки за спаданням");
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
            case 3: function(&arr[0][0], rows, cols);
            break;
            default: printf("Обрано неіснуючий варіант. Повторіть введення\n");
        }

        continue;
    }
}