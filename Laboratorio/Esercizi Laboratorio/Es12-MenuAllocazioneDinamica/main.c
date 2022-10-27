#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int bool;

void menu(char *sc);

void caricaVet(int *v1, int *len);
void stampaVet(int *v1, int *len);

int* copiaPari(int *v1, int *v2, int *len);

int main() {
    int *i, *j;
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
                fflush("sdtin");
                j = copiaPari(v1, v2, len);
                for(*i = 0; *i < *j; (*i) = *i + 1)
                    printf("Cella n.%d = %d", *i+1, *(v2+*i));
                break;
            case 'b':
            case 'B':
                fflush("sdtin");

                break;
            case 'c':
            case 'C':
                fflush("sdtin");

                break;
            case 'd':
            case 'D':
                fflush("sdtin");

                break;
            case 'e':
            case 'E':
                fflush("sdtin");

                break;
            case 'f':
            case 'F':
                fflush("sdtin");

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
    printf("b. \n");
    printf("c. \n");
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
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", len);
    v1 = (int*) calloc(*len ,sizeof(int));
    v2 = (int*) calloc(*len ,sizeof(int));


    for(*i = 0, *j = 0; *i < *len; (*i) = *i + 1)
    {
        if(*(v1+*i) % 2 == 0)
        {
            *(v2 + *j) = *(v1+*i);
            *j = *j + 1;
        }
    }

    return *j;
}

