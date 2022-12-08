#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char Str_Hello[] = "Hello, ";
    char Str_Name[20];

    printf("Enter your name: ");
    scanf("%s", &Str_Name);

    char *Str_Result = strcat(Str_Hello, Str_Name);
    char *New_Result = malloc(sizeof(char) * 40);

    int i;
    for(i = 0; i < 40; i++) {
		if (i < strlen(Str_Result)) {
            New_Result[i] = Str_Result[i];
        } else {
            New_Result[i] = '!';
        }
    }

    printf("%s", New_Result);
}