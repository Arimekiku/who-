#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <malloc.h>

void print(int *arr, int N) {
    int i, j;
    printf("Ваш масив:\n");

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", arr[i * N + j]);
        }

        printf("\n");
    } 
}

void manual_input(int *arr, int N) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Запишіть %d-й елемент %d-го ряду: ", j + 1, i + 1);
            scanf("%d", &arr[i * N + j]);
        }
    } 

    print(arr, N);
}

void random_input(int *arr, int N) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            arr[i * N + j] = rand() % 10;
        }
    } 

    print(arr, N);
}

void function(int *arr, int N) {
    int i, j, sum = 0, dec = 0;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (j > dec) {
                sum += arr[i * N + j];
            }
        }

        dec++;
    }

    printf("\n\nСума: %d", sum);
}

int main() {
    srand(time(NULL)); //Робимо рандом рандомним
    int N;
    printf("\nЗапишіть розмір масива: ");
    scanf("%d", &N);
    int arr[N][N];

    while (1) {
        printf("\n 1 - Заповнення з клавіатури");
        printf("\n 2 - Рандомне заповнення");
        printf("\n 3 - Сума елементів, які лежать праворуч від головної діагоналі");
        printf("\n 4 - Вихід \n");
        printf("Оберіть необхідне: ");
        
        int menubar;
        /* число – вибір рядка меню */
        scanf ("%d", &menubar);

        switch(menubar)
        {
            case 4: printf("\nПрограма завершилась\n"); return 0;
            case 1: manual_input(&arr[0][0], N);
            break;
            case 2: random_input(&arr[0][0], N);
            break;
            case 3: function(&arr[0][0], N);
            break;
            default: printf("Обрано неіснуючий варіант. Повторіть введення\n");
        }

        continue;
    }
}