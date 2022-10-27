#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TRUE 1
#define FAlSE 0

int main() {
    int *n;          //vettore di int
    char *vC;        //vettore di char
    int *i, *len;    //indice e lunghezza

    //ALLOCAZIONE DINAMICA --> malloc
    i = (int*) malloc(sizeof(int));      //La malloc restituisce un area di memoria void*, quindi devo fare un casting al tipo della variabile che voglio;
    len = (int*) malloc(sizeof(int));

    *len = 10;
    printf("Addr puntatore: %p\nAddr in puntatore: %p\nValore nel puntatore: %d", &len, len, *len);

    vC = (char*)malloc(sizeof(char) * (*len));
    srand(time(NULL));



    printf("\n\nMALLOC");
    for(*i = 0; *i < *len; (*i) = *i + 1)
        *(vC+*i) = 'a' + rand() % ('a' - 'z');

    for(*i = 0; *i < *len; (*i) = *i + 1)
        printf("\nValore vC nella cella %d: %c", *i, *(vC+*i));

    //ALLOCAZIONE DINAMICA --> calloc
    printf("\n\nCALLOC");
    n = (int*) calloc(*len ,sizeof(int));
    for(*i = 0; *i < *len; (*i) = *i + 1)
        *(n+*i) = 'a' + rand() % ('a' - 'z');

    for(*i = 0; *i < *len; (*i) = *i + 1)
        printf("\nValore vC nella cella %d: %d", *i, *(n+*i));

    //ALLOCAZIONE DINAMICA --> realloc
    printf("\n\nREALLOC");
    *len = 15;
    n = realloc(n, *len * sizeof(int));
    for(*i = 0; *i < *len; (*i) = *i + 1)
        printf("\nValore vC nella cella %d: %d", *i, *(n+*i));

    //RILASCIO MEMORIE ALLOCATE IN MEMORIA --> free
    free(n);
    free(vC);
    free(i);
    free(len);
    printf("\nAddr puntatore: %p\nAddr in puntatore: %p\nValore nel puntatore: %d", &len, len, *len);

    return 0;
}
