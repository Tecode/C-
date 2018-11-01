#include<stdio.h>

void main()
{
    int array[5] = {0};
    int *ptr = NULL;
    int max = 0;
    ptr = array;
    for (int i =0; i < 5; ++i) {
        scanf("%d", ptr+i);
    }
    for (; ptr < array+5; ++ptr) {
        if (*ptr%2 == 0) {
            max = max >*ptr ? max : *ptr;
        }
    }
    if (max) {
        printf("Maximum even number = %d", max);
    } else {
        printf("None even number");
    }
}