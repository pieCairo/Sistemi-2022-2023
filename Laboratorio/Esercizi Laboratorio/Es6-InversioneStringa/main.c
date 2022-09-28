#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30

int main() {
    char str[MAX];
    int length;
    char *p1, *p2;


    printf("Inserisci la stringa da modificare: ");
    gets(str);

    length = strlen(str);
    p1 = str;
    p2 = str + length - 1;

    for(int i = 0; i < length / 2; i++)
    {
        int aus = *p1;
        *p1 = *p2;
        *p2 = aus;

        p1++;
        p2--;
    }

    printf("\nLa stringa \212: ");
    puts(str);

    return 0;
}