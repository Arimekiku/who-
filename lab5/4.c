#include <stdio.h>

int main() {
    int N = 20, ch, k, nbr, people, i;
    int array[N];

    for (i = 0; i < 20; i++) {
        array[i] = -1;
    }

    while (1) {
        printf("\nPlease, enter a number from 1 to 4:\n1.Show yout list\n2.Add someone\n3.Delete someone\n4.Exit the program\n");

        scanf("%d", &ch);
        if (ch == 4) {
            break;
        }
        
        switch(ch) {
            case 1:
                for (k = 0; k < N; k++) {
                    if (array[k] != -1) {
                        printf("%d. %d ", k, array[k]);
                    }
                }                                   
                break;
            case 2:
                printf("Choose one mark from 0 to 10, please: ");
                scanf("%d", &nbr);

                if (nbr > 10 || nbr < 0) {
                    printf("You should choose from 0 to 10!");
                    break;
                } else {
                    printf("Enter number of guest 0-19: ");

                    scanf("%d", &people);
                    if (people > 19 || people < 0) {
                        printf("Sorry, you should choose from 0 to 19");
                        break;  
                    } else {
                        array[people] = nbr;
                    }          
                }
                printf("Added!");
                break;
            case 3:
                printf("Enter someone you want to delete(they number): ");
                scanf("%d", &people);
                if (people > 19 || people < 0) {
                    printf("Sorry, you should choose from 0 to 19");
                    break;  
                } else {
                    int i;
                    array[people] = -1;
                    for(i = people; i < N - 1; i++) {
                        array[i] = array[i + 1];
                    }

                    printf("Deleted!");
                    N--;
                }
                break;
            default:
                printf("That's wrong.");
                break;
        }
    }
  return 0;
}
