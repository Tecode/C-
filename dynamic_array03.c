#include <stdio.h>
#include <stdlib.h>

int * dynamicArray(void);

void main() {
    int *p = dynamicArray();
    printf("%d", *p);
}

int * dynamicArray(void) {
    int *p = malloc(sizeof(*p));
    *p = 56;
    return p;
}