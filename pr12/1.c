#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <malloc.h>

void print(int *arr, int A, int B, int C) {
    int i, j, k;
    printf("Ваш масив:\n");

    for (i = 0; i < A; i++) {
        for (j = 0; j < B; j++) {
            for (k = 0; k < C; k++) {
                printf("%d ", arr[k + j * C + i * C * B]);
            }
            
            printf("\n");
        }

        printf("\n\nНаступний аркуш\n\n");
    } 
}

void manual_input(int *arr, int A, int B, int C) {
    int i, j, k;

    for (i = 0; i < A; i++) {
        for (j = 0; j < B; j++) {
            for (k = 0; k < C; k++) {
                printf("Запишіть %d-й елемент %d-го ряду %d-го аркушу: ", k + 1, i + 1, i + 1);
            }
            scanf("%d", &arr[k + j * C + i * C * B]);
        }
    }
}

void random_input(int *arr, int A, int B, int C) {
    int i, j, k;

    for (i = 0; i < A; i++) {
        for (j = 0; j < B; j++) {
            for (k = 0; k < C; k++) {
                arr[k + j * C + i * C * B] = rand() % 10;
            }
        }
    }
}

void function(int *arr, int A, int B, int C) {
    int i, j, k, counter = 0;

    for (i = 0; i < A; i++) {
        for (j = 0; j < B; j++) {
            for (k = 0; k < C; k++) {
                if (A % 2 == 0) {
                    if (k < 4 && arr[k + j * C + i * C * B] == 4) {
                        counter++;
                    }
                } else {
                    if (k > 26 && arr[k + j * C + i * C * B] == 4) {
                        counter++;
                    }
                }
            }
        }
    } 

    printf("\n\nОцінка 4 зустрічається: %d разів", counter);
}

int main() {
    srand(time(NULL)); //Робимо рандом рандомним
    int A = 12, B = 50, C = 30;
    int arr[A][B][C];

    while (1) {
        printf("\n 1 - Заповнення з клавіатури");
        printf("\n 2 - Рандомне заповнення");
        printf("\n 3 - Вивести масив");
        printf("\n 4 - Порахувати кількість чотвірок");
        printf("\n 5 - Вихід \n");
        printf("Оберіть необхідне: ");
        
        int menubar;
        /* число – вибір рядка меню */
        scanf ("%d", &menubar);

        switch(menubar)
        {
            case 5: printf("\nПрограма завершилась\n"); return 0;
            case 1: manual_input(&arr[0][0][0], A, B, C);
            break;
            case 2: random_input(&arr[0][0][0], A, B, C);
            break;
            case 3: print(&arr[0][0][0], A, B, C);
            break;
            case 4: function(&arr[0][0][0], A, B, C);
            break;
            default: printf("Обрано неіснуючий варіант. Повторіть введення\n");
        }

        continue;
    }
}