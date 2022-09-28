#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30

int main() {
    char str[MAX];
    char str2[MAX];
    char output[MAX];
    int length, length2;
    char *p1, *p2;


    printf("Inserisci la stringa originale: ");
    gets(str);
    printf("Inserisci la stringa da concatenare: ");
    gets(str2);
    strcpy(output, str);

    length = strlen(str);
    length2 = strlen(str2);
    p1 = output + length;

    char confirm = ' ';
    printf("Vuoi che le stringhe vengano unite o che abbiano uno spazio in mezzo? (Y/N)");
    scanf("%c", &confirm);
    if(confirm == 'Y')
    {
        *p1 = ' ';
        p1++;
    }
    p2 = str2;

    int i = 0;
    while(i < length2)
    {
        *p1 = *p2;
        p1++;
        p2++;
        i++;
    }

    *p1 = '\0';

    printf("\nLa stringa concatenata \212: ");
    puts(output);

    return 0;
}