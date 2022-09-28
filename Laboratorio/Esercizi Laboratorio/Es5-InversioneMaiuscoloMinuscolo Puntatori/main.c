#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30

int main() {
    char str[MAX];

    printf("Inserisci la stringa da modificare: ");
    gets(str);

    char *p1 = str;

    for(int i = 0; *p1 != '\0'; i++)
    {
        if(*p1 > 'a' && *p1 <= 'z')
            *p1-=32;
        else
            *p1+=32;

        p1++;
    }

    printf("\nLa stringa \212: ");
    puts(str);

    return 0;
}