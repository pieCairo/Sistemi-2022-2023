#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30

int main()
{
    char s[MAX];
    int len;

    printf("Inserisci la stringa: ");
    gets(s);
    len = strlen(s);

    char *pI;
    pI= s;
    char *pF;
    pF = s + (len - 1);

    while((pI < pF) && (*pI == *pF))
    {
        pI++;
        pF--;
    }

    if(pI < pF)
        printf("La stringa non \212 palindroma");
    else
        printf("la stringa \212 palindroma");

    return 0;
}