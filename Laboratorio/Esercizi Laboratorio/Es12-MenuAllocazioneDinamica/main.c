#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 100

void menu(char *sc);

void caricaVet(int *v1, int *len)
{
    int *i;

    i = (int*) calloc(1, sizeof(int));
    for(*i = 0; *i < *len; (*i)++)
        *(v1 + (*i)) = 1 + rand() % 10;
}
void stampaVet(int *v1, int *len)
{
    int *i;

    i = (int*) calloc(1, sizeof(int));
    for(*i = 0; *i < *len; (*i)++)
        printf("\nCella %d: %d", *i, *(v1 + (*i)));
}

int* copiaPari(int *v1, int *v2, int *len);
void invertiStringa(char *s);
void concatenaStringa(char *s, char *s2);
void spostaNonDoppioni(char *s, char *s2);

int main() {

    srand(time(NULL));

    int *lenv1, *lenv2;

    char *str;
    char *str2;
    int *i;
    int *j;
    char *scelta;
    int *len;
    int *v1;
    int *v2;

    scelta = (char*) calloc(1,sizeof(char));
    do{
        menu(scelta);
        switch(*scelta)
        {
            case 'a':
            case 'A':
                getchar();

                lenv1 = (int*) malloc(sizeof(int));

                do{
                    printf("Inserisci dimensione vettore -> ");
                    scanf("%d", lenv1);
                }while((*lenv1 <= 0));
                fflush(stdin);
                v1 = (int*) malloc(sizeof(int) * (*lenv1));
                v2 = (int*) malloc(sizeof(int) * (*lenv1));
                printf("Stampa vettore 1\n");
                caricaVet(v1, lenv1);
                stampaVet(v1, lenv1);
                //v1 = (int*) calloc(*lenv1, sizeof(int));
                lenv2 = copiaPari(v1, v2, lenv1);
                printf("\n\nStampa vettore v2");
                stampaVet(v2, lenv2);
                free(v1);
                free(v2);
                free(lenv1);
                free(lenv2);
                getchar();
                break;
            case 'b':
            case 'B':
                fflush(stdin);
                str = (char*) calloc(MAX, sizeof(char));

                printf("Inserisci la stringa: ");
                gets(str);

                invertiStringa(str);

                printf("\nStringa dopo il reverse: %s", str);
                free(str);

                fflush(stdin);

                break;
            case 'c':
            case 'C':
                fflush(stdin);
                str = (char*) calloc(MAX, sizeof(char));
                str2 = (char*) calloc(MAX, sizeof(char));

                printf("Inserisci la stringa: ");
                gets(str);
                printf("Inserisci la stringa da concatenare: ");
                gets(str2);

                concatenaStringa(str, str2);

                printf("\nStringa concatenata: %s", str);
                free(str);
                free(str2);

                fflush(stdin);
                break;
            case 'd':
            case 'D':
                fflush(stdin);
                str = (char*) calloc(MAX, sizeof(char));
                str2 = (char*) calloc(MAX, sizeof(char));

                printf("Inserisci la stringa: ");
                gets(str);

                spostaNonDoppioni(str, str2);

                printf("\nStringa senza doppioni: %s", str2);
                free(str);
                free(str2);

                fflush(stdin);
                break;
            case 'e':
            case 'E':
                fflush(stdin);

                break;
            case 'f':
            case 'F':
                fflush(stdin);

                break;
        }
        getchar();

    }
    while((*scelta) != 'q' && (*scelta != 'Q'));

    system("@cls || clear");
    printf("Programma terminato ...");
    return 0;
}

void menu(char *sc)
{
    system("@cls || clear");

    printf("a. Dato un vettore di interi casuali caricare in v2 solo i valori pari \n");
    printf("b. Inverti il contenuto di una stringa\n");
    printf("c. Concatena una stringa\n");
    printf("d. Sposta in stringa s2 solo caratteri che non si ripetono in s1\n");
    printf("e. \n");
    printf("f. \n");
    printf("g. \n");
    printf("h. \n");
    printf("i. \n");
    printf("q. ESCI \n");

    printf("Scelta --> ");
    scanf("%c", sc);


}

int* copiaPari(int *v1, int *v2, int *len)
{
    int *i, *j;

    i = (int*) malloc(sizeof(int));
    j = (int*) malloc(sizeof(int));

    for(*i = 0, *j = 0; *i < *len; (*i) = *i + 1)
    {
        if(*(v1+ (*i)) % 2 == 0)
        {
            *(v2 + (*j)) = *(v1+ (*i));
            *j = *j + 1;
        }
    }

    v2 = realloc(v2, (*j) * sizeof(int));
    return j;
}
void invertiStringa(char *s)
{
    char *aus, *pF;

    s = (char*) realloc(s, ( (strlen(s)+1) * sizeof(char)));
    aus = (char*) calloc(1, sizeof(char));

    printf("Stringa prima del reverse: %s", s);
    pF = s + strlen(s) - 1;

    for(; s < pF; s++, pF--)
    {
        *aus = *s;
        *s = *pF;
        *pF = *aus;
    }


}
void concatenaStringa(char *s, char *s2)
{
    int len1 = strlen(s);

    s = (char*) realloc(s, ( (strlen(s) + strlen(s2) + 1) * sizeof(char)));

    s = s+len1;

    while(*s2 != '\0')
    {
        *s = *s2;
        s++;
        s2++;
    }

    *s = '\0';

}

void spostaNonDoppioni(char *s, char *s2)
{
    s = (char*) realloc(s, ( (strlen(s) + strlen(s2) + 1) * sizeof(char)));
    char aus;

    char *p, *sc;
    p = s;

    for(; *p != '\0'; p++)
    {
        aus = *p;

        sc = p;
        while(*sc != aus && *sc != '\0')
            sc++;

        if(*sc == '\0')
        {
            *s2 = *p;
            s2++;
        }
    }


}
