#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * name(char * text, char * name) {
    if (!text[0])
        return "No string found.";

    char *tt = text;

    tt += strlen(text) - strlen(name);
    if (*tt >= 'A' && *tt  <= 'Z')
    {
        *tt = *tt + 'a' - 'A';
    }

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
 
char * aReplace(char * text) {
    if (!text[0])
        return "No string found.";

    char *tt = text;
    while(*tt != '\0')
    {
        if (*tt == 'a')
        {
            *tt = '@';
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

    while (1) {
        printf("\n 1 - Замінити усі а на @");
        printf("\n 2 - Залишити в імені першу букву маленькою, решту - великими");
        printf("\n 3 - Вихід \n");
        printf("Оберіть необхідне: ");
        
        int menubar;
        /* число – вибір рядка меню */
        scanf ("%d", &menubar);

        switch(menubar)
        {
            case 3: printf("\nПрограма завершилась\n"); return 0;
            case 1: printf("\n\n%s", aReplace(Str_Result));
            break;
            case 2: printf("\n\n%s", name(Str_Result, Str_Name));
            break;
            default: printf("Обрано неіснуючий варіант. Повторіть введення\n");
        }

        continue;
    }
}