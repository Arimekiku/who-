#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * test(char * text) {
    if (!text[0])
        return "No string found.";

    char *tt = text;
    while(*tt != '\0')
    {
        if (*tt >= 'a' && *tt  <= 'z')
        {
            *tt = *tt + 'A' - 'a';
        }

        tt++;
    }

    return text;
}

int main() {
    char Str_Hello[] = "Hello, ";
    char Str_Name[20];

    printf("Enter your name: ");
    scanf("%s", &Str_Name);

    char *Str_Result = strcat(Str_Hello, Str_Name);
    printf("%s", Str_Result);
    printf("\n%s", test(Str_Result));
}