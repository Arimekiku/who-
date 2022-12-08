#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char Str_Hello[] = "Hello, ";
    char Str_Name[20];

    printf("Enter your name: ");
    scanf("%s", &Str_Name);

    char *Str_Result = strcat(Str_Hello, Str_Name);
    printf("%s", Str_Result);
}