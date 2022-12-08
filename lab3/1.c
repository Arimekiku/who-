#include <stdio.h>
#include <math.h>
 
int main() {
    int N;
    double x = 0.1, sum = 0.0;
    
    printf("N = ");
    scanf("%d", &N);
    
    if (N > 0) {
        for(int i = 1; i < N + 1; i++) {
            sum += sin(i + x);
        }
        
        printf("sum = %lf", sum);
    } else {
        printf("Wrong N!");
    }
}