#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#define MAX 30

typedef struct dipendente
{
    char matricola[5];
    char cognome[MAX];
    int eta;
    struct dipendente *next;

} Dipendenti;

Dipendenti* nuovoDipendente();
Dipendenti* addOnHead(Dipendenti *testa);

int main()
{
    srand(time(NULL));

    Dipendenti* testa = NULL;

    testa = addOnHead(testa);



    return 0;
}

Dipendenti* nuovoDipendente()
{
    Dipendenti *pDip;
    int et,i;
    char cogn[MAX];
    char matr[5];

    //caricamento casuale
    for(i = 0; i < 2; i++)
        matr[i]='A'+rand() % ('A'-'Z');
    for(i = 2; i < 4; i++)
        matr[i] = '0' + rand() % ('0'-'9');

    printf("cognome-->");
    gets(cogn);

    printf("eta-->");
    scanf("%d",&et);

    pDip= (Dipendenti*) malloc(sizeof(Dipendenti));
    strcpy(pDip->cognome,cogn);
    strcpy(pDip->matricola,matr);
    pDip->eta = et;
    pDip->next = NULL;

    return pDip;
}

Dipendenti* addOnHead(Dipendenti *testa)
{
    Dipendenti *nodo;

    nodo = nuovoDipendente();
    if(testa == NULL)
        testa = nodo;
    else
    {
        nodo->next = testa;
        testa = nodo;
    }

    return testa;

}