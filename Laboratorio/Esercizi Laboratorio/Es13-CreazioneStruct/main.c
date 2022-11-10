#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define MAX 30

typedef struct Studente
{
    int matr;
    char nome[MAX];
    float inf, sis, tpsi;
}Studenti;

Studenti* creaNodo();
void stampaNodo(Studenti* pStu);


int main() {
    Studenti *nodo = NULL;

    nodo = creaNodo();
    stampaNodo(nodo);


    return 0;
}

Studenti* creaNodo()
{
    Studenti *pStu;
    int matricola = 0;
    char nominativo[MAX];
    float info, sist, tpsit;

    printf("Inserisci la matricola dello studente: ");
    scanf("%d", &matricola);
    fflush(stdin);
    printf("Inserisci il nome dello studente: ");
    gets(nominativo);

    printf("Inserisci il voto di informatica: ");
    scanf("%d", &info);
    fflush(stdin);

    printf("Inserisci il voto di sistemi: ");
    scanf("%d", &sist);
    fflush(stdin);

    printf("Inserisci il voto di tpsit: ");
    scanf("%d", &tpsit);
    fflush(stdin);

    pStu = (Studenti*)malloc(sizeof(Studenti));
    pStu->matr = matricola;
    pStu->sis = sist;
    pStu->tpsi = tpsit;
    pStu->inf = info;
    strcpy(pStu->nome, nominativo);

    return pStu;
}

void stampaNodo(Studenti* pStu)
{
    printf("Matricola: %d", pStu->matr);
    printf("\nNome: "); puts(pStu->nome);
    printf("\nVoto Sistemi: %f", pStu->sis);
    printf("\nVoto Informatica: %f", pStu->inf);
    printf("\nVoto TPSIT: %f    ", pStu->tpsi);
}