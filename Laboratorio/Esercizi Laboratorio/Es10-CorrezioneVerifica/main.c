#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX 50+1
#define TRUE 1
#define FALSE 0

char menu();

int controllaFibonacci(int *v, int size);
int controllaStringaDecrescente(char *s);
int controllaStringaDoppioni(char *s);
void controllaElementiInComunte(char *s, char *s2);
void caricaStampaVetRand(int *v, int size);

int main() {
    srand(time(NULL));

    int vFibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    char scelta;
    int size;
    int v[MAX];
    char str[MAX];
    char str2[MAX];

    for(int i = 0; i < 10; i++)
        printf("\n%d", vFibonacci[i]);
    do
    {
        system("@cls||clear");

        scelta = menu();

        switch(scelta)
        {
            case 'a':
                getchar();
                do
                {
                    printf("Inserisci la dimensione del vettore: ");
                    scanf("%d", &size);
                }
                while(size < 3 || size > MAX);
            /*    caricaStampaVetRand(v, size);
*/
                if(controllaFibonacci(vFibonacci, 10) == TRUE)
                    printf("La stringa contiene un codice di fibonacci");
                else
                    printf("La stringa non contiene un codice di fibonacci");

    /*              if(controllaFibonacci(v, size) == TRUE)
                        printf("La stringa contiene un codice di fibonacci");
                    else
                        printf("La stringa non contiene un codice di fibonacci"); */
            break;
            case 'b':
                getchar();
                printf("Inserisci una stringa in input: ");
                gets(str);

                if(controllaStringaDecrescente(str) == TRUE)
                    printf("La stringa \212 decrescente");
                else
                    printf("La stringa non \212 decrescente");

                break;

            case 'c':
                getchar();
                printf("Inserisci una stringa in input: ");
                gets(str);

                if(controllaStringaDoppioni(str) == TRUE)
                    printf("La stringa ha doppioni");
                else
                    printf("La stringa non ha doppioni");
                break;

            case 'd':
                getchar();
                printf("Inserisci una stringa in input: ");
                gets(str);

                printf("Inserisci una stringa in input: ");
                gets(str2);

                controllaElementiInComunte(str, str2);
                break;
        }

        getchar();
    }
    while(scelta != 'q' && scelta != 'Q');
    fflush(stdin);
    getchar();
    system("cls");

    printf("Programma terminato...\n");

    return 0;
}

char menu() {
    char sc;

    printf("MENU'\n");
    printf("a. Controlla il codice di fibonacci in un vettore con valori random \n");
    printf("b. Controlla una stringa e stampa se il suo contenuto \212 decrescente o no \n");
    printf("c. Controlla se ci sono doppioni nella stringa\n");
    printf("d. Controlla i caratteri in comune\n");
    printf("q. Esci\n");

    do
    {
        printf("\nScelta --> ");
        scanf("%c", &sc);
    }
    while( ((sc < 'a') || (sc > 'e')) && sc != 'q');


    return sc;
}

void caricaStampaVetRand(int *v, int size)
{
    int i;
    for(; v < (v + size); v++)
        *v = rand() % 50, 1;

    int *pV;
    for(pV = v; pV < (v + size); pV++)
        printf("Cella: %d\n", *pV);
}


int controllaFibonacci(int *v, int size)
{
    //int vF = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    int vCella = 0;
    int esci = FALSE;
    int *pV;
    pV = v;

    pV = pV+2;
        printf("%d --> v", *v);
        printf("\n%d --> pV", *pV);

    while(pV < (v+size) && esci == FALSE)
    {

        vCella = *(pV-1);
        vCella += *(pV-2);

        if (*pV != vCella)
            esci = TRUE;

        vCella = 0;
        pV++;

    }

    if(esci == FALSE)
        return 1;
    else
        return 0;

}

int controllaStringaDecrescente(char *s)
{
    int min = 256;
    while(*s <= min && *s!= '\0')
    {
        min = *s;
        s++;
    }

    if(*s == '\0')
        return 1;
    else
        return 0;
}

int controllaStringaDoppioni(char *s)
{
    int esci = FALSE;
    char aus;

    aus = *s;
    s++;

    while(esci == FALSE && *s != '\0')
    {
        if(aus == *s)
            esci = TRUE;
        else
            aus = *s;

        s++;
    }

    if(esci == TRUE)
        return TRUE;
    else
        return FALSE;

}

void controllaElementiInComunte(char *s, char *s2)
{
    int len1, len2;
    int cnt, i, j;

    for(len1 = 0; *(s  +  len1) != '\0'; len1++);
    for(len2 = 0; *(s2 + len2) != '\0'; len2++);

    for(i = 0; i < len1; i++)
    {
        j = 0;
        while( (*(s+j) != *(s+i)) && i < j)
            j++;

        if(i == j)
        {

            j = 0;
            while( (*(s2+j) != '\0') &&  (*(s2+j) != *(s+i)) )
                j++;

            if(*(s2+j) != '\0')
                cnt++;
        }

    }
}
