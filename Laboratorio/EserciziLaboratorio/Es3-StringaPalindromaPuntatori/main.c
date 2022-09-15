#include <stdio.h>
#include <string.h>

int getLength(char s[]);

int main() {
    char string[30];
    printf("Inserisci la stringa in input: ");
    gets_s(string);

    for(int i = 0; i < getLength(string) / 2; i++);
    {

    }
    return 0;
}

int getLength(char s[])
{
    int i = 0;

    do
        i++;
    while(s[i] != '\0');

    return i;
}