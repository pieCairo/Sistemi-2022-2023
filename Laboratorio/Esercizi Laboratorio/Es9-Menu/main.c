#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 50 + 1
#define TRUE 1
#define FALSE 0

int menu()
{
    int sc;
    printf("0: --------> Esci\n");
    printf("Esercizio 1: Inversione caratteri maiuscoli minuscoli con Puntatori\n");
    printf("Esercizio 2: Inversione stringa con Puntatori\n");
    printf("Esercizio 3: Concatenazione di due stringhe con Puntatori\n");
    printf("Esercizio 4: Ordinamento numeri in un vettore con Puntatori\n");
    printf("Esercizio 5: Cifratura a chiave\n");
    printf("Esercizio 6: Cifratura di Cesare\n");
    printf("Esercizio 7: Data una stirnga visualizzare in output le ricorrenze\n");
    printf("Esercizio 8: Date due stringhe verificare se sono l'anagramma l'una dell'altra\n");
    printf("Esercizio 9: Date due stringhe verificare se sono Hertzianamente compatibili\n");
    do {
        printf("Scelta -->");
        scanf("%d", &sc);
    }
    while(sc < 0 || sc > 10);

    return sc;
}

void toUpperCase(char s[])
{
    char *p;

    for(p = s; *p != '\0'; p++)
    {
        if(*p >= 'a' && *p <= 'z')
        {
            *p -= 32;
        }
    }
}

void invertiMaiuscMinuscStringa(char *s);
void invertiStringa(char str[]);
int concatenaStringa(char str[], char str2[], char output[]);
void caricaVet(int *v, int n);
void stampaVet(int *v, int n);
void ordinaVet(int *v, int n);
void cifraSemplice(char s[], int key);
void decifraSemplice(char s[], int key);
void cifraCesare(char str2[], char key2);
void decifraCesare(char str2[], char key2);

void contaOccorrenze(char *s);
void verificaAnagramma(char *s, char *s2);
void verificaHertzianamente(char *s, char *s2);

int main()
{
    int scelta = 0;
    int key = 0;
    char key2 = 0;

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

                if(concatenaStringa(str, str2, output) == 1)
                {
                    printf("\nLe stringhe concatenate sono: ");
                    puts(str);
                }
                else
                    printf("Le stringe non possono essere concatenate");

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
                getchar();
                printf("Inserisci la frase da cifrare --> ");
                gets(str);
                printf("Inserisci la chiave --> ");
                scanf("%d", &key);

                cifraSemplice(str, key);
                printf("\nFrase cifrata --> ");
                puts(str);
                decifraSemplice(str, key);
                printf("Frase Decifrata --> ");
                puts(str);
                break;
            case 6:
                getchar();
                printf("Inserisci la frase da cifrare --> ");
                gets(str);
                toUpperCase(str);

                printf("Inserisci la chiave (sotto forma di carattere) --> ");
                scanf("%c", &key2);
                if(key2 >= 'a' && key2 <= 'z')
                    key2 -= 32;

                cifraCesare(str, key2);
                printf("\nFrase cifrata --> ");
                puts(str);

                decifraCesare(str, key2);
                printf("Frase Decifrata --> ");
                puts(str);
                break;
            case 7:
                getchar();
                printf("Inserisci la frase da contare le ricorrenze --> ");
                gets(str);
                contaOccorrenze(str);
                break;
            case 8:
                getchar();
                printf("Inserisci la prima frase --> ");
                gets(str);
                printf("Inserisci la seconda frase --> ");
                gets(str2);
                verificaAnagramma(str, str2);
                break;
            case 9:
                getchar();
                printf("Inserisci la prima frase --> ");
                gets(str);
                printf("Inserisci la seconda frase --> ");
                gets(str2);
                verificaHertzianamente(str, str2);
                break;
        }
        fflush(stdin);
        getchar();
        system("cls");
    }
    while(scelta != 0);

    printf("Programma terminato...\n");

    return 0;
}

void invertiMaiuscMinuscStringa(char *s)
{
    for(; *s != '\0'; s++)
        if(*s >= 'a' && *s <= 'z')
            *s-=32;
        else if(*s >= 'A' && *s <= 'Z')
            *s+=32;

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
int concatenaStringa(char str[], char str2[], char output[])
{
    int  length1, length2, controlla = 0;
    char *p, *p2;

    for(length1 = 0, p = str; *p != '\0'; length1++,  p++);
    for(length2 = 0, p2 = str2; *p2 != '\0'; length2++, p2++);

    if((length1 + length2) > MAX - 1)
        controlla = 0;
    else
    {
        for(p = str; *p != '\0'; p++);

        *p = ' ';
        p++;

        for(p2 = str2; *p2 != '\0'; p++, p2++)
            *p = *p2;

        *p = '\0';
        controlla = 1;
    }

    return controlla;
}
void caricaVet(int *v, int n)
{
    srand(time(NULL));
    for(int i = 0; i < n; i++, v++)
        *v = rand() % 50 + 1;

}
void stampaVet(int *v, int n)
{
    printf("\n");
    for(int i = 0; i < n; i++)
        printf("%d\t", *(v+i));
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

}

void cifraSemplice(char s[], int key)
{
    char *p;
    for(p = s; *p != '\0'; p++)
        if(*p+key > 0 && *p+key < 255)
            *p+=key;
}
void decifraSemplice(char s[], int key)
{
    char *p;
    for(p = s; *p != '\0'; p++)
            *p-=key;
}
void cifraCesare(char *s, char key)
{
    int ausKey = key - 'A';

    for(; *s != '\0'; s++)
    {
        if(*s >= 'A' && *s <= 'Z')
        {
            *s += ausKey;

            if(*s > 'Z')
                *s -= 26;
        }
    }

}
void decifraCesare(char *s, char key) {
    int ausKey = key - 'A';

    for (; *s != '\0'; s++)
    {
        if (*s >= 'A' && *s <= 'Z')
        {
            *s -= ausKey;
            if (*s < 'A')
                *s += 26;
        }

    }
}

void contaOccorrenze(char *s)
{
    int output[128];
    int *p, i, j;

    for(i = 0; i < 128; i++)
        output[i] = 0;

    for(p = output; *s != '\0'; s++)
    {
        *(p + *s) +=1;
    }

    for(j = 0, p = output; j < 128; j++, p++)
        if(*p > 0)
            printf("\nLa lettera %c compare %d volte: ", j, *p);
}

void verificaAnagramma(char *s, char *s2)
{
    int occ[128];
    int occ2[128];
    int *p, *p2, i, j;
    char check = 128;

    for(i = 0; i < 128; i++)
        occ[i] = 0;

    for(p = occ; *s != '\0'; s++)
    {
        *(p + *s) +=1;
    }

    for(i = 0; i < 128; i++)
        occ2[i] = 0;

    for(p2 = occ2; *s2 != '\0'; s2++)
    {
        *(p2 + *s) +=1;
    }

    while(s++ == s2++);


    if(*s != *s2)
        printf("Non sono due anagrammi");
    else
        printf("Sono due anagrammi");



}

void verificaHertzianamente(char *s, char *s2) {
    int l1 = 0, l2 = 0;
    int i;
    int heartz = TRUE;

    for (; *(s + l1) != '\0'; l1++);
    for (; *(s2 + l2) != '\0'; l2++);

    if (l1 != l2)
        printf("Le due stringhe non sono Heartziane");
    else
    {
        heartz = TRUE;
        i = 1;
        while( (i < l1) && (heartz == TRUE))
        {
            if(*(s + i) != *(s2 + i))
            {
                printf("Le due stringhe non sono Heartziane");
                heartz = FALSE;
            }

            i+=2;
        }
        if (heartz == FALSE)
        {
            heartz = TRUE;
            i = 0;
            while ((i < l1) && (heartz == TRUE))
            {
                if (*(s + i) != *(s2 + i))
                {
                    printf("Le due stringhe non sono Heartziane");
                    heartz = FALSE;
                }

                i+=2;
            }
        }
    }

    if (heartz == TRUE)
        printf("Le due stringhe sono Heartziane");
}
