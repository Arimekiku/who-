#include <stdio.h>
#include <stdlib.h>

int main() {
    float average;
    int i, N, value, sum = 0;

    printf("N = ");
    scanf("%d", &N);
    
    if (N > 0) {
        for(int i = 1; i < N + 1; i++) {
            printf("A%d = ", i);
            scanf("%d", &value);
            sum += value;
        }
        
        average = (float) sum / N;
        printf("\n\nsum = %d", sum);
        printf("\naverage: %.2f", average);
    } else {
        printf("Wrong N!");
    }
}