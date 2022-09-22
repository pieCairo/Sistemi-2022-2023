#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30

int main() {
    char str[MAX];
    char str2[MAX];

    printf("Inserisci la stringa da duplicare: ");
    gets(str);

    char *p1 = str;
    char *p2 = str2;

    for(int i = 0; str[i] != '\0'; i++)
        *p1++ = *p2++;

    *p2 = '\0';

    printf("La stringa clonata \212: ");
    puts(str2);

    return 0;
}