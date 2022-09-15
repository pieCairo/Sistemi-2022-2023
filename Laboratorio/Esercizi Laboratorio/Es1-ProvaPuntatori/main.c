#include <stdio.h>

int main() {
    int n = 8;
    int *p;

    printf("Size(int): %d\nSize(float): %d\nSize(char): %d\n", sizeof(int), sizeof(float), sizeof(char));
    printf("\n");
    printf("Size(int *): %d\nSize(float *): %d\nSize(char *): %d\n", sizeof(int*), sizeof(float*), sizeof(char*));

    //per leggere l'indirizzo e il contenuto di n;
    printf("Contenuto di n: %d --> Indirizzo di n: %p\n", n, &n);
    //per leggere l'indirizzo e il contenuto di p;
    printf("Contenuto di p: %d --> Indirizzo di p: %p\n", p, &p);

    p = &n;
    printf("Indirizzo di p dopo l'azzegnazione a n: %p\n", p);
    //stampo contenuto di n
    printf("Contenuto di n: (classico)%d -- (tramite puntatore)%d\n", n, *p);
    *p = 5;
    printf("Contenuto di n: (classico): %d -- (tramite puntatore): %d\n", n, *p);

    return 0;
}