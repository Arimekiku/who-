#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//V = 1/3 * pi * R^2 * H
//S = pi * R^2 + pi * R * l

float count_V(float R, float H) {
    return 1./3. * 3.14 * pow(R, 2) * H;
}

float count_S(float R, float l) {
    return 3.14 * (pow(R, 2) + R * l);
}

float change_R() {
    float R;

    printf("Введіть R: ");
    scanf("%f", &R);

    return R;
}

float change_H() {
    float H;

    printf("Введіть H: ");
    scanf("%f", &H);

    return H;
}

float change_l() {
    float l;

    printf("Введіть l: ");
    scanf("%f", &l);

    return l;
}

int main() {
    float R, H, l;
    float *ptr_R = &R, *ptr_H = &H, *ptr_l = &l;

    float V, S;
    float *ptr_V = &V, *ptr_S = &S;

    *ptr_R = change_R();
    *ptr_H = change_H();
    *ptr_l = change_l();

    while (1) {
        printf("\n\n 1 - Змінити значення конусу");
        printf("\n 2 - Порахувати площу поверхні");
        printf("\n 3 - Порахувати об'єм");
        printf("\n 4 - Вихід \n");
        printf("Оберіть необхідне: ");
        
        int menubar;
        /* число – вибір рядка меню */
        scanf ("%d", &menubar);

        switch(menubar)
        {
            case 4: printf("\nПрограма завершилась\n"); return 0;
            case 1: *ptr_R = change_R();
                    *ptr_H = change_H();
                    *ptr_l = change_l();
                    break;
            case 2: *ptr_V = count_V(R, l);
                    printf("\nV: %f", V);
                    break;
            case 3: *ptr_S = count_S(R, H);
                    printf("\nS: %f", S);
                    break;
            default: printf("Обрано неіснуючий варіант. Повторіть введення\n");
        }

        continue;
    }
}