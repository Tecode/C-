#include <stdio.h>
#include <stdlib.h>

void DynamicArray(int *p);

void main() {
    int i =45;
    int *p = &i;
    DynamicArray(p);
    printf("%d", *p);
}

void DynamicArray(int *p) {
    p = malloc(sizeof(p));
    *p = 60;
}