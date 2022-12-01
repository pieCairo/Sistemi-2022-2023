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
Dipendenti *delByPos(Dipendenti *testa, int pos);
Dipendenti *addOrdinato(Dipendenti  *testa);
void sortByCogn(Dipendenti *testa);


int main()
{
    Dipendenti *nodo;


    Dipendenti *testa = NULL;
    Dipendenti *newPos = NULL;
    int pos = 0;

    srand(time(NULL));

    /*
    int i;
    for(i=0; i < 5; i++)
    {
        testa = addOrdinato(testa);
    } */

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

    printf("Inserisci la posizione del nodo da eliminare: ");
    scanf("%d", &pos);

    testa = delByPos(testa, pos);
    showList(testa);


    sortByCogn(testa);
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


Dipendenti *delByPos(Dipendenti *testa, int pos)
{
    Dipendenti *pt = testa;
    Dipendenti *pt2;

    int cont2 = 1;

    if(pos > contaNodi(testa))
    {
        while(cont2 != contaNodi(testa) - 1)
        {
            cont2++;
            pt = pt->next;
        }
        pt2 = pt->next;
        pt->next = NULL;
        free(pt2);
    }
    else if(pos <= 1)
    {
        testa = testa->next;
        free(pt);
    }
    else
    {
        while(cont2 != pos - 1)
        {
            cont2++;
            pt = pt->next;
        }
        pt2 = pt->next;
        pt->next = pt2->next;
        free(pt2);

    }

    return testa;
}

Dipendenti *addOrdinato(Dipendenti  *testa)
{
    Dipendenti *nodo;
    nodo = nuovoDipendente();
    int nEsecuz = 0;

    Dipendenti *pt = testa;

/*  if(testa == NULL)
        testa = nodo;
    else
    {
        while(strcmp(pt->cognome, nodo->cognome) > 0)
        {
            pt = pt->next;
            nEsecuz++;
        }

        if(nEsecuz == 0)
        {
            testa = addOnHead(testa, nodo);
        }
        else if(pt->next == NULL)
            pt->next = nodo;
        else
        {
            nodo->next = pt->next;
            pt->next = nodo;
        }
    }
    if(testa == NULL)
        testa = nodo;
    else
    {
        if(strcmp(testa->cognome, nodo->cognome) > 0
        {
            nodo->next = testa;
            testa = nodo;
        }
        else
        {
            pt = testa;
            Dipendenti *pLista = testa -> next;

            while(pLista != NULL && strcmp(nodo->cognome, pLista->cognome) > 0)
            {
                pt = pLista;
                pLista = pLista->next;
            }


        }
    }

    printf("Nodo aggiunto!\n");

    return testa; */
}

void sortByCogn(Dipendenti *testa)
{
    int i, j;
    int rifare = 1;
    char aus[MAX];
    int ausEta;

    Dipendenti *l1 = NULL;
    Dipendenti *l2 = NULL;

    while(rifare == 1)
    {
        rifare = 0;
        for(l1 = testa; l1->next != NULL; l1 = l1->next)
        {
            for(l2 = l1 -> next; l2 != NULL; l2 = l2->next)
            {
                if(strcmp(l1->cognome, l2->cognome) > 0)
                {
                    rifare = 1;
                    strcpy(aus, l1->matricola);
                    strcpy(l1->matricola, l2->matricola);
                    strcpy(l2->matrica, aus);

                    strcpy(aus, l1->cognome);
                    strcpy(l1->cognome, l2->cognome);
                    strcpy(l2->cognome, aus);

                    ausEta = l1->eta;
                    l1->eta = l2->eta;
                    l2->eta = aus;
                }
            }
        }
    }

    printf("Ordinamento completato");
}

