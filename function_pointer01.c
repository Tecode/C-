#include <stdio.h>

int Max(int a, int b);

void main() {
    int a, b;
    int (*p)(int a, int b);
    p = Max;
    scanf("%d %d", &a, &b);
    printf("Max number is %d", (*p)(a, b));
    return;
}

int Max(int a, int b) {
    return a > b ? a : b;
}