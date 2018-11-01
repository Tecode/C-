#include <stdio.h>

int max(int *a, int *b);

void main() {
    int a = 45, b = 56;
    int (*fun)();
    fun = max;
    printf("%d ", (*fun)(&a, &b));
    printf("%.12f", 0.1+0.2);
}
int max(int *a, int *b) {
    return *a > *b ? *a : *b;
}