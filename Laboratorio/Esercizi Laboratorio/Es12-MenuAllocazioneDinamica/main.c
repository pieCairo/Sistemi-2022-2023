#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 100

void menu(char *sc);

void caricaVet(int *v1, int *len);
void stampaVet(int *v1, int *len);

int* copiaPari(int *v1, int *v2, int *len);
void invertiStringa(char *s);
void concatenaStringa(char *s, char *s2);

int main() {

    srand(time(NULL));

    int *len1;
    int *len2;
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
                fflush(stdin);
                printf("Inserisci la dimensione del vettore: ");
                scanf("%d", len);

                v1 = (int*) calloc(*len ,sizeof(int));
                v2 = (int*) calloc(*len ,sizeof(int));
                i = (int*)calloc(1, sizeof(int));
                j = (int*)calloc(1, sizeof(int));


                j = copiaPari(v1, v2, len);
                for(*i = 0; *i < *j; (*i) = *i + 1)
                    printf("Cella n.%d = %d", *i+1, *(v2+*i));
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
    printf("d. \n");
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

    caricaVet(v1, len);

    for(*i = 0, *j = 0; *i < *len; (*i) = *i + 1)
    {
        if(*(v1+*i) % 2 == 0)
        {
            *(v2 + *j) = *(v1+*i);
            *j = *j + 1;
        }
    }

    v2 = realloc(v2, (*j) * sizeof(int));
    return *j;
}


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
        printf("Cella %d: %d", *i, *(v1 + (*i)));
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
    char *aus, *pF;
    int *i;
    char *p;

    i = (int*) calloc(1, sizeof(int));
    s2 = (char*) realloc(s, ( (strlen(s2)+1) * sizeof(char)));
    aus = (char*) calloc(1, sizeof(char));

    *p = strlen(s) + 1;

    for(; p2 < (s2 + strlen(s2)); p2++)
    {
        *p = *p2;

    }
}
