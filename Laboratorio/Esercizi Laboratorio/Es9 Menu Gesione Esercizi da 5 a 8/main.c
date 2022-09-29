#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 50 + 1

int menu()
{
    int sc;
    printf("0: --------> Esci");
    printf("Esercizio 1: Inversione caratteri maiuscoli minuscoli con Puntatori\n");
    printf("Esercizio 2: Inversione stringa con Puntatori\n");
    printf("Esercizio 3: Concatenazione di due stringhe con Puntatori\n");
    printf("Esercizio 4: Ordinamento numeri in un vettore con Puntatori\n");
    printf("Esercizio 5: Cifratura a chiave");
    printf("Esercizio 6: Cifratura di Cesare");
    do {
        printf("Scelta -->");
        scanf("%d", &sc);
    }
    while(sc < 0 || sc > 6);

    return sc;
}

void invertiMaiuscMinuscStringa(char *s);
void invertiStringa(char str[]);
void concatenaStringa(char str[], char str2[], char output[]);
void caricaVet(int *v, int n);
void stampaVet(int *v, int n);
void ordinaVet(int *v, int n);

int main() {
    int scelta = 0;

    int n = 0;
    int v[MAX];
    char str[MAX];
    char str2[MAX];
    char output[MAX * 2];

    do
    {
        system("cls");
        scelta = menu();

        switch(scelta)
        {
            case 1:
                getchar();
                printf("Frase --> ");
                gets(str);

                invertiMaiuscMinuscStringa(str);

                printf("\nFrase modificata --> ");
                puts(str);
                break;
            case 2:
                getchar();
                printf("Frase --> ");
                gets(str);

                invertiStringa(str);

                printf("\nFrase invertita --> ");
                puts(str);
                break;
            case 3:
                getchar();
                printf("Frase --> ");
                gets(str);
                printf("\nFrase da concatenare --> ");
                gets(str2);

                concatenaStringa(str, str2, output);

                printf("\nFrase concatenata --> ");
                puts(output);
                break;
            case 4:
                printf("Inserisci la dimensione del vettore: ");
                scanf("%d", &n);
                caricaVet(v, n);
                stampaVet(v, n);
                ordinaVet(v, n);
                stampaVet(v, n);
                break;
            case 5:
                break;
            case 6:
                break;
        }
        getchar();
        fflush("stdin");
    }
    while(scelta != 0);

    printf("Programma terminato\n");

    return 0;
}

void invertiMaiuscMinuscStringa(char *s)
{
    while(*s != '\0')
    {
        if(*s >= 'a' && *s <= 'z')
            *s-=32;
        else if(*s >= 'A' && *s <= 'Z')
            *s+=32;

        s++;
    }
}
void invertiStringa(char str[])
{
    char aus = ' ';
    char *s;
    char *sFin;

    s = str;

    for(sFin = str; *sFin != '\0'; sFin++);
    sFin--;

    for(int i = 0; sFin > s; i++)
    {
        aus = *s;
        *s = *sFin;
        *sFin = aus;

        s++;
        sFin--;
    }
}
void concatenaStringa(char str[], char str2[], char output[])
{
    int length2;
    int i = 0;
    char *p1, *p2;

    strcpy(output, str);

    length2 = strlen(str2);
    p1 = output + strlen(str);

    char confirm = ' ';
    printf("Vuoi che le stringhe vengano unite o che abbiano uno spazio in mezzo? (Y/N)");
    scanf("%c", &confirm);
    if(confirm == 'Y')
    {
        *p1 = ' ';
        p1++;
    }
    p2 = str2;

    while(i++ < length2)
    {
        *p1 = *p2;
        p1++;
        p2++;
    }

    *p1 = '\0';
}

void caricaVet(int *v, int n)
{
    srand(time(NULL));
    for(int i = 0; i < n; i++, v++)
    {
        *v = rand() % 50 + 1;
    }


}
void stampaVet(int *v, int n)
{
    printf("\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", *(v+i));
    }
}
void ordinaVet(int *v, int n)
{
    int posMin, aus;
    for(int i = 0; i <= n - 2; i++)
    {
        posMin = i;
        for(int j = i + 1; j <= n - 1; j++)
        {
            if( *(v + posMin) > *(v + j) )
                posMin = j;
        }

        if(posMin != i)
        {
            aus = *(v + i);
            *(v+i) = *(v+posMin);
            *(v+posMin) = aus;
        }
    }

};