#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30


int menu()
{
    int sc;
    printf("0: --------> Esci");
    printf("Esercizio 1: Cifratura Semplice\n");
    printf("Esercizio 2: Cifratura Di Cesare\n");
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

void cifraSemplice(char str[], int key);
void decifraSemplice(char str[], int key);

void cifraCesare(char str2[], char key2);
void decifraCesare(char str2[], char key2);



int main() {
    int scelta = 0;
    int key = 0;
    char key2 = 0;
    char str[MAX];
    char str2[MAX];

    do
    {
        system("cls");
        scelta = menu();

        switch(scelta)
        {
            case 1:


                break;
            case 2:
                break;
        }
        getchar();
        fflush("stdin");
    }
    while(scelta != 0);

    printf("Programma terminato\n");

    return 0;
}


