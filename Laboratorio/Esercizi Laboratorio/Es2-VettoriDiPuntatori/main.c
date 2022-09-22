#include <stdio.h>

int main() {
    int v[] = {3, 6, 9};
 
    for(int i = 0; i < 3; i++)
    {
        printf("v[%d]: = %d - Addr = %p\n", i, v[i], &v[i]);
        printf("Puntatore - v[%d]: = %d - Addr = %p\n", i, *(v+i), &v[i]);
    }

    printf("%d\n", *v);
    printf("%d\n", *(v+1));
    printf("%d\n", *(v+2));

    return 0;
}