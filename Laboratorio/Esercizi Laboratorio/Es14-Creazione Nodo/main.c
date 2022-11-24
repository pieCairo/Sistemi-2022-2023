#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 30

typedef struct dipendente {
    char matricola[5];
    char cognome[MAX];
    int eta;
    struct dipendente *next;

} Dipendenti;

Dipendenti* nuovoDipendente();
Dipendenti* addOnHead(Dipendenti *testa, Dipendenti *nodo);
Dipendenti *addOnTail(Dipendenti *testa, Dipendenti *nodo);

int contaNodi(Dipendenti *testa);
void showList(Dipendenti *testa);
Dipendenti *addByPos(Dipendenti *testa, int pos);


int main()
{
    Dipendenti *nodo;

    Dipendenti *testa = NULL;
    Dipendenti *newPos = NULL;
    int pos = 0;

    srand(time(NULL));

    nodo = nuovoDipendente();
    testa = addOnHead(testa, nodo);
    nodo = nuovoDipendente();
    testa = addOnTail(testa, nodo);
    nodo = nuovoDipendente();
    testa = addOnHead(testa, nodo);
    nodo = nuovoDipendente();
    testa = addOnTail(testa, nodo);

    showList(testa);

    printf("I nodi presenti sono %d\n\n", contaNodi(testa));
    getchar();
    system("cls");

    printf("Inserisci la posizione del nodo da aggiungere: ");
    scanf("%d", &pos);

    testa = addByPos(testa, pos);
    showList(testa);

    return 0;
}

Dipendenti* addOnHead(Dipendenti *testa, Dipendenti *nodo)
{
    if(testa == NULL) //lista vuota, non ci sono nodi
        testa = nodo;
    else
    {
        nodo->next = testa;
        testa = nodo;
    }

    return testa;
}

Dipendenti *addOnTail(Dipendenti *testa, Dipendenti *nodo)
{
    if (testa == NULL)
        testa = nodo;
    else
    {
        Dipendenti *pt = testa;
        while (pt->next != NULL)
            pt = pt->next;

        pt->next = nodo;
    }

    return testa;
}

Dipendenti* nuovoDipendente()
{
    Dipendenti *pDip;
    char matr[4];
    char cogn[MAX];
    int eta, i;

    // AA00 [A-Z] [0-9]
    for (i = 0; i < 2; i++) {
        matr[i] = 'A' + rand() % ('A' - 'Z');
    }
    for (i = 2; i < 4; i++) {
        matr[i] = '0' + rand() % ('0' - '9');
    }

    // INSIMENTO COGNOME
    fflush(stdin);
    printf("Cognome --> ");
    gets(cogn);
    fflush(stdin);
    // INSERIMENTO ETA
    eta = 18 + rand() % (65 - 18);

    pDip = (Dipendenti*)calloc(1, sizeof(Dipendenti));

    strcpy(pDip->matricola, matr);
    strcpy(pDip->cognome, cogn);
    pDip->eta = eta;

    pDip->next = NULL;

    return pDip;
}

void showList(Dipendenti* testa)
{
    Dipendenti *pt = testa;
    if(pt == NULL)
        printf("La lista \212 vuota");
    else
    {
        while (pt != NULL)
        {
            printf("%d\t%s\t%d\n", pt->matricola, pt->cognome, pt->eta);
            pt = pt->next;
        }
    }
}

int contaNodi(Dipendenti *testa)
{
    Dipendenti *pt = testa;
    int cont = 0;

    while (pt != NULL)
    {
        cont++;
        pt = pt->next;
    }
    return cont;
}

Dipendenti *addByPos(Dipendenti *testa, int pos)
{
    Dipendenti *nodo;
    nodo = nuovoDipendente();
    Dipendenti *pt = testa;

    int cont2 = 1;

    if(pos > contaNodi(testa))
        testa = addOnTail(testa, nodo);
    else if(pos <= 1)
        testa = addOnHead(testa, nodo);
    else
    {
        while(cont2 != pos - 1)
        {
            cont2++;
            pt = pt->next;
        }
        nodo->next = pt->next;
        pt->next = nodo;

    }

    return testa;
}
